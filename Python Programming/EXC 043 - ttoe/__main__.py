import model

if __name__== "__main__":
    pathTxt = "txt/"
    pathXls = "xls/"
    txt = model.setFile(pathTxt, pathXls)
    txt.toXls()
