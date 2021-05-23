-- Keep a log of any SQL queries you execute as you solve the mystery.
tables
airports                  crime_scene_reports       people
atm_transactions          flights                   phone_calls
bank_accounts             interviews
courthouse_security_logs  passengers

FIRST CLUE
28th july 2020
Theft of CS50 mascot duck at 10:15 am at the chamberlin street courthouse.
Interviews taken
3 witnesses , they all mention the courthouse.



select * from atm_transactions;
.schema phone_calls

select * from interviews where year = 2020 and month = 7 and day = 28;

Suspicious phone_calls
221 | (130) 555-0289 | (996) 555-8899 | 2020 | 7 | 28 | 51
224 | (499) 555-9472 | (892) 555-8872 | 2020 | 7 | 28 | 36
233 | (367) 555-5533 | (375) 555-8161 | 2020 | 7 | 28 | 45
251 | (499) 555-9472 | (717) 555-1342 | 2020 | 7 | 28 | 50
254 | (286) 555-6063 | (676) 555-6554 | 2020 | 7 | 28 | 43
255 | (770) 555-1861 | (725) 555-3243 | 2020 | 7 | 28 | 49
261 | (031) 555-6622 | (910) 555-3251 | 2020 | 7 | 28 | 38
279 | (826) 555-1652 | (066) 555-9701 | 2020 | 7 | 28 | 55
281 | (338) 555-6650 | (704) 555-2131 | 2020 | 7 | 28 | 54

Suspicious withdrawals
246 | 28500762 | 2020 | 7 | 28 | Fifer Street | withdraw | 48
264 | 28296815 | 2020 | 7 | 28 | Fifer Street | withdraw | 20
266 | 76054385 | 2020 | 7 | 28 | Fifer Street | withdraw | 60
267 | 49610011 | 2020 | 7 | 28 | Fifer Street | withdraw | 50
269 | 16153065 | 2020 | 7 | 28 | Fifer Street | withdraw | 80
288 | 25506511 | 2020 | 7 | 28 | Fifer Street | withdraw | 20
313 | 81061156 | 2020 | 7 | 28 | Fifer Street | withdraw | 30
336 | 26013199 | 2020 | 7 | 28 | Fifer Street | withdraw | 35


Suspicious cars
260 | 2020 | 7 | 28 | 10 | 16 | exit | 5P2BI95
261 | 2020 | 7 | 28 | 10 | 18 | exit | 94KL13X
262 | 2020 | 7 | 28 | 10 | 18 | exit | 6P58WS2
263 | 2020 | 7 | 28 | 10 | 19 | exit | 4328GD8
264 | 2020 | 7 | 28 | 10 | 20 | exit | G412CB7
265 | 2020 | 7 | 28 | 10 | 21 | exit | L93JTIZ
266 | 2020 | 7 | 28 | 10 | 23 | exit | 322W7JE
267 | 2020 | 7 | 28 | 10 | 23 | exit | 0NTHK55

select * from flights where year =2020 and month = 7  and day = 29 order by hour,minute asc;


Thief plans to escape with duck at 29th july 2020 at 8:20 flight with id 36 , from fiftyville regional airport to Heathrow airport london.

.schema airports

select * from airports where id = 36;


id | name | year | month | day | transcript
158 | Jose | 2020 | 7 | 28 | “Ah,” said he, “I forgot that I had not seen you for some weeks. It is a little souvenir from the King of Bohemia in return for my assistance in the case of the Irene Adler papers.”
159 | Eugene | 2020 | 7 | 28 | “I suppose,” said Holmes, “that when Mr. Windibank came back from France he was very annoyed at your having gone to the ball.”
160 | Barbara | 2020 | 7 | 28 | “You had my note?” he asked with a deep harsh voice and a strongly marked German accent. “I told you that I would call.” He looked from one to the other of us, as if uncertain which to address.
161 | Ruth | 2020 | 7 | 28 | Sometime within ten minutes of the theft, I saw the thief get into a car in the courthouse parking lot and drive away. If you have security footage from the courthouse parking lot, you might want to look for cars that left the parking lot in that time frame.
162 | Eugene | 2020 | 7 | 28 | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at the courthouse, I was walking by the ATM on Fifer Street and saw the thief there withdrawing some money.
163 | Raymond | 2020 | 7 | 28 | As the thief was leaving the courthouse, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket.

select * from phone_calls where day = 28 and month = 7 and year = 2020 and duration < 60;
select * from atm_transactions where day = 28 and month = 7 and year = 2020 and atm_location = 'Fifer Street;

select license_plate from courthouse_security_logs where year = 2020 and day = 28 and month = 7 and hour = 10 and minute < 25 and minute > 15;

.schema people
select * from people where license_plate = '5P2BI95';
select * from people where license_plate = '94KL13X';
select * from people where license_plate = '6P58WS2';
select * from people where license_plate = '4328GD8';
select * from people where license_plate = 'G412CB7';
select * from people where license_plate = 'L93JTIZ';
select * from people where license_plate = '322W7JE';
select * from people where license_plate = '0NTHK55';

select * from people where phone_number = '(725) 555-3243';
