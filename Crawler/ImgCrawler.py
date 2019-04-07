import requests
import shutil
from bs4 import BeautifulSoup
import os
from urllib.request import urlretrieve
from bs4 import BeautifulSoup
from urllib.error import HTTPError
#out = 'http://static.win4000.com/home/images/placeholder.jpg'

#print(allimgs)
headers = {'User-Agent':"Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.1 (KHTML, like Gecko) Chrome/22.0.1207.1 Safari/537.1"}

i = 2
while i < 100:
	#網址
    re = requests.get('http://www.happyjuzi.com/star-ku/p'+str(i)+'.html')
    soup = BeautifulSoup(re.text)
    #要抓的目標
    allimgs = soup.find_all('div', 'star_hotstar')
    for img in allimgs:
    	#圖片名稱
        fname = img.find('a')['title']+'.jpg'
        print(fname)
        #圖片連結
        src = img.find('img')['src']
        print(src)
        #local = os.path.join('C:\\Users\\Davis\\Desktop\\bug\\phota\\%s.jpg' % name)
        #urlretrieve(src,local)
        res2 = requests.get(src, headers=headers, stream=True)
        f = open('./phota/'+fname, 'wb')
        shutil.copyfileobj(res2.raw, f)
        f.close()
        del res2
    i+=1
print('finish')