import requests #引入函式庫
from bs4 import BeautifulSoup
import re
url = 'https://medium.com/pyladies-taiwan/%E5%BE%9Edcard%E7%B6%B2%E7%AB%99%E7%9C%8B%E7%88%AC%E8%9F%B2%E5%85%A5%E9%96%80-65105f0ddac'
resp = requests.get(url)
soup = BeautifulSoup(resp.text, 'html.parser')
dcard_title = soup.find_all('h3', re.compile('raf graf--h3 graf--leading'))
print('爬蟲:')
for index, item in enumerate(dcard_title[:10]):
    print("{0:2d}. {1}".format(index + 1, item.text.strip()))