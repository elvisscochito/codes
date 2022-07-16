from instabot import Bot

def insta_bot(username, password):
    bot = Bot()

    bot.login(username=username, password=password)

    follow_option = input("Who do you wanna follow?")
    bot.follow(follow_option)

    message_option = input("Did you wanna send a message? (y/n)")
    if message_option == "y":
        message = input("Enter your message: ")
        bot.send_message(message, username)
    else:
        print("No message sent")
    
    bot.follow_followers(username)

if __name__ == "__main__":
    insta_bot("username", "password")
    print("Done")
