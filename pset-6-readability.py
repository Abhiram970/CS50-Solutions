
#Author : P.V. Abhiram
# CS50 Pset-6 : Readability
while True:
    a = input()
    letters, words, sentences, digits = 0, 0, 0, 0
    for i in a:
        if i.isalpha():
            letters += 1
        if i.isnumeric():
            digits += 1
    for i in range(len(a)):
        if a[i] == ' ':
            words += 1
    words += 1
    for i in a:
        if i == '.' or i == '!' or i == '?':
            sentences += 1
    L = float(letters/words*100)
    S = float(sentences/words*100)
    index = round((float)(0.0588 * L - 0.296 * S - 15.8))
    if index < 1:
        print("Before Grade 1")
    if index > 1 and index < 16:
        print("Grade", index)
    if index > 16:
        print("Grade 16+")
    print(L,S)
    print(letters,words,sentences)