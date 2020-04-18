# RSAデモ

事前に必要なもの．

- 素数二つ（実際に使われる素数はある程度大きなもの）
  - p: 3
  - q: 11
- 法: 3*11(公開情報)
- 適当な平文（今回はX=8）

nを適当に決める．

- 受信側が`PQ=n(p−1)(q−1)+1`を満たす整数P，Qを見つけ、Pを公開鍵、Qを秘密鍵と決める。

n=1の場合．
`1*2*10+1`=21=`3*7`

- 3が公開鍵P(公開情報)
- 7が秘密鍵Q

送信側が`X′≡X**P(mod pq)`を送り、受信側が`(X′)Q(mod pq)≡X`と復号

送信側は受信側から送られてきた鍵を用いて，情報を暗号化．

`(8**3)%33=17`(暗号文)

暗号文**暗号鍵 % 法とすると復元できるはず．

```
>>> 17**7
410338673
>>> 410338673 % 33
8
```

## 解読

ここで，問題となるのは暗号鍵が外部から求められないかという点．

悪意のあるものは，33という値と，3という公開鍵のみ知っている．

33 = 3*11

となり，なんかスルスルと全部出されてしまう．

## n = 2の場合

- 素数二つ（実際に使われる素数はある程度大きなもの）
  - p: 3
  - q: 11
- 法: 3*11(公開情報)
- 適当な平文（今回はX=8）
- 受信側が`PQ=n(p−1)(q−1)+1`を満たす整数P，Qを見つけ、Pを公開鍵、Qを秘密鍵と決める。

n=2の場合．
`2*2*10+1`=41=`1*41`

P=1, Q=41

n=3の場合
`3*2*10+1`=61

## 複雑な場合

- 113
- 227
- 法: 25651(公開情報)
- n = 1
- PQ=25313
- P=17(公開情報)
- Q=1489

PQ = `1*112*226+1` = 25313

平文: 100

暗号文 = `100**17%25651` = `17556`
平文 = `17556**1489%25651` = `100`

### 解読したい

25651が公開されている情報．ここから秘密鍵を割り出せるか？

## 参考

- [RSA暗号の仕組みとは？【作り方や解き方・安全性までわかりやすく解説します】 | 遊ぶ数学](https://integraldx.info/rsa-code-453)