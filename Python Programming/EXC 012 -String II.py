print('請輸入字串並直接輸出顯示\n')
str = str(input())
print(str)
print('請下單一指令顯示：\n')
print(str[8:15],'，' ,str[0:7], '，', str[24:31], '，', str[16:23], '。')
print('請下單一指令顯示每一句的第一個字：\n')
print(str[0], str[8], str[16], str[24])
print('請下單一指令倒著顯示每一句的最後一字：\n')
print(str[30], str[22], str[14], str[6])
print('請在第二與第三句間插入:\n')
print(str[8:15],'，' ,str[0:7], '，半神半聖亦半仙，', str[24:31], '，', str[16:23], '。')
print('請下單一指令讓文字一句一行的顯示出來: \n')
print(str[8:15],'，\n' ,str[0:7], '，\n', str[24:31], '，\n', str[16:23], '。\n')
