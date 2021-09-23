from flask import Flask 

app = Flask(__name__)

@app.route("/")
# Python decorator

def index():
    return "hello , world"



