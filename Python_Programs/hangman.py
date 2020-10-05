import random

print("""H A N G M A N""")
word_list = ["python", "javascript", "java", "kotlin"]

while True:
    decision = input('Type "play" to play the game, "exit" to quit:')
    if decision == "exit":
        break
    elif decision == "play":
        answer = random.choice(word_list)
        answerx = answer
        guess = "-" * len(answer)
        all_letters = ""

        mistakes = 0
        while True:
            print()
            print(guess)
            letter = input("Input a letter:")

            if len(letter) > 1:
                print("You should input a single letter")
                continue
            if letter.islower():
                pass
            else:
                print("It is not an ASCII lowercase letter")
                continue
            if letter in answer:
                for i in range(answer.count(letter)):
                    guess = (
                        guess[: answer.find(letter)]
                        + letter
                        + guess[answer.find(letter) + 1 :]
                    )
                    answer = answer.replace(letter, "-", 1)
            else:
                if letter in all_letters:
                    print("You already typed this letter")
                else:
                    print("No such letter in the word")
                    mistakes += 1
                if mistakes == 8:
                    print("You are hanged!")
                    break
            all_letters = all_letters + letter
            if guess == answerx:
                print("You guessed the word!")
                print("You survived!")
                break
    else:
        continue
