
workspace_string = '/home/matt/Documents/Robot-transporting/workspace/'
with open(workspace_string + 'src/van_loading/config/model.csv') as readFile:
    content = readFile.readlines()

try:
    writeFile = open(workspace_string + 'src/van_loading/config/model.csv', 'w')
    for line in range(len(content)-1, -1, -1):
        writeFile.write(content[int(line)])
except IOError:
    print("Error writing to the file, please try again.")
else:
    print("Successfully flipped the model!")
