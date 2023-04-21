from utils import parser
import sys


with open('data/data.ini', 'r') as f:
    data = parser.parse(f.read())

if __name__ == "__main__":
    while True:
        query = input("> ").strip()
        if query in ("quit", "exit", "q"):
            sys.exit(0)
        elif query in data:
            print(data[query], end="\n\n")
