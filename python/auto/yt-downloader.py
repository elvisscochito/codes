import os
from pytube import YouTube

os.chdir("/Users/elvirodominguezsoriano/Downloads")

def yt_downloader(link):
    yt = YouTube(link)

    print("About: ", f"Title: {yt.title}", f"Author: {yt.author}", f"Views: {yt.views}", f"Length: {yt.length}", f"Description: {yt.description}", sep="\n")

    yd = yt.streams.get_highest_resolution()
    
    print("Downloading...")    
    print(f"Resolution: {yd.resolution}", sep="\n")
    yd.download()
    print("Downloaded!")

if __name__ == "__main__":
    url = input("Enter the YouTube video URL: ")
    yt_downloader(url)
