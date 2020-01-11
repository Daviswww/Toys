import io
import os
import pandas as pd

class setFile:
    def __init__(self, pathTxt, pathXls):
        self.pathTxt = pathTxt
        self.pathXls = pathXls
    def toXls(self):
        files = os.listdir(self.pathTxt)
        files.remove('.DS_Store')
        for file in files:
            data = []
            with io.open(self.pathTxt+file, 'r', encoding="utf8", errors='ignore') as f:
                ls = f.readlines()
                for i in range(4, len(ls)):
                    data.append(ls[i].replace('\n', '').split('\t'))
            xls = pd.DataFrame(data, columns=['mA', 'mW', 'V'])
            xls.to_excel(self.pathXls+file.split('.')[0]+".xls")
