from PIL import Image # python3 -m pip install Pillow
import os

downloads_path = "/Users/elvirodominguezsoriano/Downloads/"

def image_compressor():
    for file_name in os.listdir(downloads_path):
        name, kind = os.path.splitext(downloads_path + file_name)

        if kind in [".jpg", ".JPG" ".jpeg", ".JPEG", ".png", ".PNG"]:
            img = Image.open(downloads_path + file_name)
            img.save(downloads_path + "compressed_" + file_name, optimize=True, quality=60)
            print("Compressed: " + file_name)

if __name__ == "__main__":
    image_compressor()
    