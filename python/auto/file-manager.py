import os

print(os.getcwd())

os.chdir("/Users/elvirodominguezsoriano/Downloads")

# print(os.getcwd())

# print(os.listdir())

for file in os.listdir():
    if file == '.DS_Store':
        continue
    print(file)


