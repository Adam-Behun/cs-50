import sys

if len(sys.argv) != 2:
    print("Missing cm argument")
    sys.exit(1)

print(f"helo, {sys.argv[1]}")
sys.exit(0)