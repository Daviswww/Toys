place = ['觀霧', '日月潭', '阿里山', '小琉球', '墾丁']
i = len(place) + 1
print('place = ', place)

s = str(input('請輸入新地點:'))
place.insert(i, s)
i+= 1
print('place = ', place)

s = str(input('請輸入新地點:'))
place.insert(3, s)
i+= 1

print('大排到小:', end = " ")
place.sort(reverse=True)
print('place = ', place)

print('刪除:', place.pop(1), 'place = ', place)

print('刪除:', place.pop(2), place.pop(4), ' place = ', place)