import os
import shutil

downloads_path = "/Users/elvirodominguezsoriano/Downloads/"
pictures_path = "/Users/elvirodominguezsoriano/Pictures/"
music_path = "/Users/elvirodominguezsoriano/Music/"
movies_path = "/Users/elvirodominguezsoriano/Movies/"

pics = [".Jpg", ".JPG", ".jpeg", ".JPEG", ".png", ".PNG"]
music = [".mp3", ".MP3", ".m4p", ".M4P"]
movies = [".mp4", ".MP4", ".mov", ".MOV"]

def file_mover():

    for file_name in os.listdir(os.chdir(downloads_path)):
            base_name, extension = os.path.splitext(downloads_path + file_name)

            if file_name == ".DS_Store":
                continue

            elif extension in pics:
                shutil.move(file_name, pictures_path)
            
            elif extension in music:
                shutil.move(file_name, music_path)

            elif extension in movies:
                shutil.move(file_name, movies_path)

if __name__ == "__main__":
    file_mover()
    