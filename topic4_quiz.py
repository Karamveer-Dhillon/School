## Author: Karamveer Dhillon
## File Name: topic4_quiz.py
## Date: 12 Mar 2025
## Description: This program calculates the letter grade and quality point based on the score.

print("This program calculates the letter grade and quality point based on the score.")

Marks = float(input("Please enter the marks: "))

if Marks >= 0 and Marks <= 100:
    if Marks >= 90:
        letter_grade = "A"
    elif Marks >= 80 and Marks < 90:
        letter_grade = "B"
    elif Marks >= 70 and Marks < 80:
        letter_grade = "C"
    elif Marks >= 60 and Marks < 70:
        letter_grade = "D"
    else:
        letter_grade = "F"
    
    if letter_grade == "A":
        quality_point = 4
    elif letter_grade == "B":
        quality_point = 3
    elif letter_grade == "C":
        quality_point = 2
    elif letter_grade == "D":
        quality_point = 1
    else:
        quality_point = "None"
else:
    print("Please enter the marks between 0 and 100.")
    Marks = float(input("Please enter the marks: "))
    if Marks >= 0 and Marks <= 100:
        if Marks >= 90:
            letter_grade = "A"
        elif Marks >= 80 and Marks < 90:
            letter_grade = "B"
        elif Marks >= 70 and Marks < 80:
            letter_grade = "C"
        elif Marks >= 60 and Marks < 70:
            letter_grade = "D"
        else:
            letter_grade = "F"
        
        if letter_grade == "A":
            quality_point = 4
        elif letter_grade == "B":
            quality_point = 3
        elif letter_grade == "C":
            quality_point = 2
        elif letter_grade == "D":
            quality_point = 1
        else:
            quality_point = "None"
    else :
        print("Invalid input")
        exit()

print("The letter grade is: ", letter_grade)
print("The quality point is: ", quality_point)

exit()