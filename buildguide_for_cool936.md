# Build Guide

![](img/img00046.jpg)


## Parts List
Information as of March 8, 2022<br>
令和４年５月23日時点の情報
|番号| 名前 | 数 | 備考 | 調達先の例 | 参考価格 |
|:-|:-|:-|--|--|--|
|1|PCB Leftside|1|108.27 mm<br>* 86.87 mm|JLCPCB|５枚9.6ドル|
|2|PCB Rightside|1|98.87 mm<br>* 87.43 mm|↑|５枚で3.7ドル|
|3|Switch Plate|1|FR-4<br>左右一体で発注<br>242.4 mm<br>* 99.3 mm|↑|５枚で33.4ドル|
|4|Top Plate|左右１枚ずつ|アクリル3mm|※１|※２|
|5|Middle Plate|４層分（20個に分割）|アクリル3mm|※１|※２|
|6|Bottom Plate|２層分|アクリル3mm|※１|※２|
|7|M2ネジ|32|8mm<br>TopPlate側から20本挿入<br>BottomPlate側（奥）から12本挿入|DIYショップ等|10本程度で100円|
|8|M2ネジ|8|4mm<br>BottomPlate側（手前）から挿入|DIYショップ等|10本程度で100円|
|9|M2スペーサー|20|11mm丸型※３|[ヒロスギネット](https://www.hirosugi-net.co.jp/shop/default.aspx)<br>[遊舎工房](https://shop.yushakobo.jp)等|20個で748円（税込）@ヒロスギネット|
|10|Diode|36本|リードタイプ、SMDのどちらでも可|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|100個で220円（税込）|
|11|Reset Switch|2|タクタイルスイッチとも|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|1個で11円（税込）|
|12|Switch Socket|36|Cherry MX互換|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|10個で165円（税込）|
|13|TRRS Jack|2||[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|１個55円（税込）|
|14|pro micro|PCB１枚につき１個|ピンヘッダが必要|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|時価|
|15|キーキャップ|36|[DSS Micro](https://mechvault.net/products/dss-micro-keycap-set)推奨<br>※４|[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)|1個で100円前後<br>キーキャップセットで3000円程度から|
|16|TRRSケーブル|１本||[遊舎工房](https://shop.yushakobo.jp)<br>[TALP keyboard](https://talpkeyboard.net)等|300円程度から|
|17|ゴム足|８|任意|DIYショップ等|100円程度|

※１　[工房merge+](https://www.emergeplus.jp/laser-cutting-service/contact/)、[遊舎工房](https://shop.yushakobo.jp/collections/services/products/lasercut)、[Elecrow](https://www.elecrow.com/acrylic-cutting.html) 等でアクリル加工が可能。
<br>
※２　The [case folder](https://github.com/telzo2000/cool936/tree/main/case) contains two 300mmX300mm acrylic files, and the [case_wide folder](https://github.com/telzo2000/cool936/tree/main/case_wide) contains one 300mmX450mm acrylic file.
<br>
 [caseフォルダ](https://github.com/telzo2000/cool936/tree/main/case)には、300mmX300mmアクリル２枚、[case_wideフォルダ](https://github.com/telzo2000/cool936/tree/main/case_wide)には、300mmX450mmアクリル１枚にまとめられたファイルがある。
 <br>
※３　Due to the difference in acrylic accuracy, 11mm, which is slightly shorter than 12mm, is more suitable.
<br>アクリルの精度差により、12mmよりやや短い11mmの方が適当である。
<br>
※４　Since the cool936 is a QAZ-like keyboard, there are few keycaps to which the legend applies.
<br>
cool936は、QAZ的なキーボードなので、レジェンドが適応するキーキャップは少ない。
<br><br>
## 組み立て

### 0 アクリル部品の確認

cool936では、トッププレート、ミドルプレート、ボトムプレートにアクリル部品を使用するアクリル積層ケースとなっています。
<br>
トッププレートは左右それぞれ1枚ずつあります。
<br>
ミドルプレートは左右それぞれ４層となります。１層が２枚または３枚で構成されています。
<br>
ボトムプレートは左右それぞれ２層となります。大、小に分けられます。
<br>

### 左側<br>

トッププレート
![](img/img00002.jpg)

ミドルプレート１
![](img/img00003.jpg)

ミドルプレート２
![](img/img00004.jpg)

ミドルプレート３・４（同じ形状）
![](img/img00005.jpg)

ボトムプレート大
![](img/img00007.jpg)

ボトムプレート小
![](img/img00008.jpg)

### 右側<br>

トッププレート
![](img/img00009.jpg)

ミドルプレート１
![](img/img00010.jpg)

ミドルプレート２
![](img/img00011.jpg)

ミドルプレート３・４（同じ形状）
![](img/img00013.jpg)

ボトムプレート大
![](img/img00014.jpg)

ボトムプレート小
![](img/img00015.jpg)

### 1 ダイオードのハンダ付け

左右のPCBにそれぞれ、ダイオードをハンダ付けします。
<br>
構造上、どちらの面にハンダ付けしても問題ありませんが、
竜のイラストがある面にダイオードのハンダ付けをしてください。
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


参考<br>

https://github.com/telzo2000/Hello_keyboard/blob/main/readme_about_firmware.md


### 7　アクリルケースの組み立て
ボトムプレートからミドルプレートの順に、アクリル積層ケースを組み立てます。
<br>M２スペーサー11mmを20本（左右10本ずつ）、M２ネジ8mmを12本（左右6本ずつ）、２ネジ4mmを８本（左右４本ずつ）とミドルプレート２・３・４、ボトムプレート大・小を用意します。
<br>
### 左側

①ボトムプレート小から大の順で、M２ネジ8mmを挿しこみ、反対側で、M２スペーサーで固定する。

![](img/img00020.jpg)

②ボトムプレート大の残り４箇所に、M２ネジ4mmを挿しこみ、反対側で、M２スペーサーで固定する。

![](img/img00019.jpg)

③ミドルプレート３・４を重ねる。

![](img/img00018.jpg)
![](img/img00017.jpg)

④ミドルプレート２を重ねる。

![](img/img00016.jpg)

### 右側

①ボトムプレート小から大の順で、M２ネジ8mmを挿しこみ、反対側で、M２スペーサーで固定する。

![](img/img00021.jpg)

②ボトムプレート大の残り４箇所に、M２ネジ4mmを挿しこみ、反対側で、M２スペーサーで固定する。

![](img/img00022.jpg)

③ミドルプレート３・４を重ねる。

![](img/img00023.jpg)
![](img/img00024.jpg)

④ミドルプレート２を重ねる。

![](img/img00025.jpg)


### 8 トッププレート部分の組み立て

キースイッチをスイッチプレート及び、PCBのスイッチソケットに装着します。
<br>
M２ネジ8mmを20本（左右10本ずつ）とトッププレート、ミドルプレート１、アクリルケースを用意します。
### 左側

最初、スイッチプレートの穴4箇所程度に、キースイッチを挿しこみます。

![](img/img00026.jpg)

裏返します。
![](img/img00027.jpg)

次に、スイッチプレートに、ミドルプレート１をのせます。

![](img/img00028.jpg)

PCBをキースイッチに挿しこみます。

![](img/img00029.jpg)

向きを戻して、他のキースイッチも取り付けします。

![](img/img00030.jpg)

その際、ミドルプレート１の一部が外れていても大丈夫です。

![](img/img00032.jpg)

すべてのキースイッチを取り付けたら、先ほど作ったアクリルケースと組み合わせます。その際、外れていたミドルプレート１の一部を忘れないで組み合わせてください。

![](img/img00033.jpg)

![](img/img00034.jpg)

![](img/img00035.jpg)

トッププレートをのせます。

![](img/img00036.jpg)

M２ネジで固定します。

![](img/img00037.jpg)


### 右側

最初、スイッチプレートの穴4箇所程度に、キースイッチを挿しこみます。

![](img/img00039.jpg)


裏返します。次に、スイッチプレートに、ミドルプレート１をのせます。
![](img/img00040.jpg)

PCBをキースイッチに挿しこみます。
<br>
向きを戻して、他のキースイッチも取り付けします。
<br>
その際、ミドルプレート１の一部が外れていても大丈夫です。
<br>

すべてのキースイッチを取り付けたら、先ほど作ったアクリルケースと組み合わせます。その際、外れていたミドルプレート１の一部を忘れないで組み合わせてください。

![](img/img00041.jpg)

トッププレートをのせます。

![](img/img00042.jpg)

M２ネジで固定します。

![](img/img00043.jpg)

### 9 キーキャップ等の装着

お好みのキーキャップ、TRRSケーブル、USBケーブル棟を装着して完成です。
<br>
このキーキャップは設計のきっかけとなった、DSS Microです。

![](img/img00038.jpg)
![](img/img00044.jpg)

ゴム足をつけるときは、この位置がおすすめです。

![](img/img00047.jpg)

完成したら、cool936を楽しんでください。

![](img/img00045.jpg)




