function getRandom(numCount) {
    var numList = [];
    var numMin = 100000;
    var numMax = 999999;
    var listLen = numMax - numMin + 1;

    var outPut = [];

    // 将所有数顺序装填到数字列表中
    for (var i = 100000; i < numMax + 1; i++) {
        numList.push(i);
    }

    var randNum;
    for (var j = 0; j < numCount; j++) {
        // 产生一个小于列表长度的随机数randNum
        randNum = Math.floor(Math.random() * listLen);
        // 将列表的第randNum项输出
        outPut.push(numList[randNum]);
        // 将列表的最后一项替换到刚被取出的数的位置
        numList[randNum] = numList[listLen - 1];
        // 列表长度减一,即列表最后一项不会再被取到;
        listLen--;
    }

    return outPut;
}
