def compute_grade(score):
    if score >= 0.9:
        return "A"
    if score >= 0.8:
        return "B"
    if score >= 0.7:
        return "C"
    if score >= 0.6:
        return "D"

    return "F"

def main():
    score = float(input("Enter the grade: \n"))
    if not 0.0 <= score <= 1.0:
        print("Invalid score")
    else: 
        print(f"Score = {score}, grade = {compute_grade(score)}")

main()