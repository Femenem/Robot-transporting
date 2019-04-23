import glob
import os
from shutil import copyfile

workspace_string = '/home/matt/Documents/Robot-transporting/workspace/'
list_of_files = glob.glob(workspace_string + 'src/van_loading/data/*')
latest_file = max(list_of_files, key=os.path.getctime)
file_destination = workspace_string + 'src/van_loading/config/model.csv'
try:
    copyfile(latest_file, file_destination)
except IOError:
    print("Something went wrong, please try again")
else:
    print("File successfully copied to model.csv")
