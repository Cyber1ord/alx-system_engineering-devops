# Regular expression

In this project, I learned how to use regular expressions. All my regex is built for the Oniguruma library.

## Tasks :page_with_curl:

_Note: Each Ruby script in the project matches regular expressions based on an argument passed to it via the command line._

* **0. Simply matching**
  * [0-simply_match_school.rb](./0-simply_match_school.rb):Ruby script that finds a match with the provided regular expression.`School`.

* **1. Repetition Token #0**
  * [1-repetition_token_0.rb](./1-repetition_token_0.rb): Ruby script that searches for a pattern where the sequence "hb" is followed by 2-5 occurrences of the letter "t" and then followed by the letter "n".

* **2. Repetition Token #1**
  * [2-repetition_token_1.rb](./2-repetition_token_1.rb):Ruby script that looks for a pattern where the sequence "h" is followed by 0 or 1 occurrence of "b" and 0 or 1 occurrence of "t", and then followed by the letter "n".

* **3. Repetition Token #2**
  * [3-repetition_token_2.rb](./3-repetition_token_2.rb): Ruby script that identifies patterns where the sequence "hb" is followed by one or more occurrences of the letter "t" and ends with the letter "n".

* **4. Repetition Token #3**
  * [4-repetition_token_3.rb](./4-repetition_token_3.rb): Ruby script that detects patterns where the sequence "hb" is followed by zero or more occurrences of the letter "t" and ends with the letter "n".

* **5. Not quite HBTN yet**
  * [5-beginning_and_end.rb](./5-beginning_and_end.rb): Ruby script that matches a regular expression starting with `h` and ending with `n` with any single character in between.

* **6. Call me maybe**
  * [6-phone_number.rb](./6-phone_number.rb): Ruby script that matches a regular expression representing a 10-digit phone number.

* **7. OMG WHY ARE YOU SHOUTING?**
  * [7-OMG_WHY_ARE_YOU_SHOUTING.rb](./7-OMG_WHY_ARE_YOU_SHOUTING.rb): Ruby script that matches regular expressions of uppercase letters.

* **8. Textme**
  * [100-textme.rb](./100-textme.rb): Ruby script that runs statistics on TextMe app text message transcations.
  * Output: `[SENDER],[RECEIVER],[FLAGS]` where
    * `[SENDER]` is the sender phone number or name (including country code if present).
    * `[RECEIVER]` is the receiver phone number or name (including country code if present).
    * `[FLAGS]` is the flags that were used.

