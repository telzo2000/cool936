# Build Guide

## Parts List
Information as of March 8, 2022<br>
令和４年３月８日時点の情報
|番号| 名前 | 数 | 備考 | 調達先の例 | 参考価格 |
|:-|:-|:-|--|--|--|
|1|PCB Leftside|1|108.27 mm<br>* 86.87 mm|JLCPCB|５枚8.2ドル|
|2|PCB Rightside|1|98.87 mm<br>* 87.43 mm|↑|５枚で2.2ドル|
|3|Switch Plate|1|FR-4<br>左右一体で発注<br>242.4 mm<br>* 99.3 mm|↑|５枚で33.4ドル|
|4|Top Plate|左右１枚ずつ|アクリル3mm||※１|
|5|Middle Plate|４層分（20個に分割）|アクリル3mm||※１|
|6|Bottom Plate|２層分|アクリル3mm||※１|
|7|M2ネジ|18|6mm<br>TopPlate側から挿入|DIYショップ等|10本程度で100円|
|8|M2ネジ|8|4mm<br>BottomPlate側（手前）から挿入|DIYショップ等|10本程度で100円|
|9|M2ネジ|10|8mm<br>BottomPlate側（奥）から挿入|DIYショップ等|10本程度で100円|
|10|M2スペーサー|18|12mm丸型|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/default.aspx)<br>[遊舎工房](https://shop.yushakobo.jp)等|20個で748円（税込）@ヒロスギネット|
|11|Diode|36本|リードタイプ、SMDのどちらでも可|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|100個で220円（税込）|
|12|Reset Switch|2|タクタイルスイッチとも|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|1個で11円（税込）|
|13|Switch Socket|36|Cherry MX互換|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|10個で165円（税込）|
|14|TRRS Jack|2||[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|１個55円（税込）|
|15|pro micro|PCB１枚につき１個|ピンヘッダが必要|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|時価|
|16|キーキャップ|36|[DSS Micro](https://mechvault.net/products/dss-micro-keycap-set)推奨<br>※2|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|1個で100円前後<br>キーキャップセットで3000円程度から|
|17|TRRSケーブル|１本||[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|300円程度から|
|18|ゴム足|８|任意|DIYショップ等|100円程度|


※１　The [case folder](https://github.com/telzo2000/cool936/tree/main/case) contains two 300mmX300mm acrylic files, and the [case_wide folder](https://github.com/telzo2000/cool936/tree/main/case_wide) contains one 300mmX450mm acrylic file.
<br>
 [caseフォルダ](https://github.com/telzo2000/cool936/tree/main/case)には、300mmX300mmアクリル２枚、[case_wideフォルダ](https://github.com/telzo2000/cool936/tree/main/case_wide)には、300mmX450mmアクリル１枚にまとめられたファイルがある。
 <br>
※２　Since the cool936 is a QAZ-like keyboard, there are few keycaps to which the legend applies.
<br>
cool936は、QAZ的なキーボードなので、レジェンドが適応するキーキャップは少ない。
<br><br>
## 組み立て

### 1 ダイオードのハンダ付け

左右のPCBにそれぞれ、ダイオードをハンダ付けします。
<br>
構造上、どちらの面にハンダ付けしても問題ありませんが、
竜のイラストがある面にダイオードの半田付けをしてください。
<br>

### 2 スイッチソケットのはんだ付け

竜のイラストがある面に、スイッチソケットをハンダ付けします。
<br>
socketという文字が隠れるように、スイッチソケットを乗せると方向を間違えずに、
ハンダ付けができます。
<br><br>

### 3 リセットスイッチ、TRRSジャックのはんだ付け

竜のイラストがある面に、リセットスイッチ、TRRSジャックをハンダ付けします。
<br>
ハンダ付けした後、リセットスイッチとTRRSジャックのはみ出た足は、ニッパー等で切断しておいてください。
<br><br>

### 4 pro microの取り付け

竜のイラストがある面に、pro microを（できればスプリングヘッダを用いて）ハンダ付けしてください。
<br>
pro microの向きに注意が必要です。
<br>
pro microの部品が実装されている面が、下になるようにハンダ付けをしてください。
実際、逆に取り付けようとすると、pro microの部品と、先ほどハンダ付けしたスイッチソケットなどが干渉するので、
ハンダ付けができないと思います。
<br><br>

### 5 LEDのハンダ付け（任意）

後日、執筆予定。
<br><br>

### 6 仮テスト

一度スイッチを装着するか、ピンセットで接続するか等の方法でキー入力ができるかテストします。
<br>
[REMAP](https://remap-keys.app/)でファームウェアをインストールしてください。
<br>
[ここ](https://config.qmk.fm/#/test)でタイピングテストを行い、導通の確認をしてください。
<br>
すべてのキーの入力が確認できましたら、次の段階に進んでください。
<br>
うまくいかないキー入力がありましたら、温めたハンダゴテで、該当するスイッチソケット等のハンダを温め直してください。
<br><br>

### 7 スイッチソケットの装着

キースイッチをスイッチプレート及び、PCBのスイッチソケットに装着します。
<br>
最初、スイッチプレートの穴4箇所程度に、キースイッチを挿しこみます。
<br>
次に、スイッチプレートに差し込んだキースイッチと、PCBのスイッチソケットを装着します。
<br>
最後に、他のスイッチをスイッチプレートの穴を通して、PCBのスイッチソケットに装着します。
この際、キースイッチの足がきちんと入らないことがありますので、注意して挿してください。
<br>
すべて装着したら、もう一度、仮テストを実施して、キースイッチがきちんと装着されている確認してください。
<br><br>

### 8 トッププレートの装着


### 9 ミドルプレートの装着



### 10 ボトムプレートの装着




