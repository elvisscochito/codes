import PyPDF2
import os

os.chdir("/Users/elvirodominguezsoriano/Downloads")

merger = PyPDF2.PdfFileMerger()
file_output = "merged.pdf"

for file in os.listdir(os.curdir):
    if file.endswith(".pdf"):
        print(f"Merging files: {file}")
        merger.append(file)
    merger.write("merged.pdf")
    print(f"File saved as: {file_output}")
