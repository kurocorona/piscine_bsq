# BSQがんばろ
一人で考えていたら光明がさしたので、とりあえずこんな感じかなと
ひたすら関数を作って試してください
## ディレクトリ規則
### ディレクトリ構成
* BSQ.c : main関数が入ったファイル
* Makefile : コンパイルは毎回これでやりましょう。早めの準備を忘れずに
* srcs : とりあえずソースコードはここにひたすらぶち込む
* includes : ヘッダーファイルをここにぶち込む
* object : オブジェクトファイルはここにしまっておく？これはなくても大丈夫なら消します。
* .gitignore : とりあえず「.DS_store」と「a.out」はプッシュしないようにしてあります。適宜追加してください。

### 命名規則
* 基本的に使う関数名はnormに則ること
* 関数名、ファイル名共に頭に「ft_」をつけること！忘れずに！！！！！！(これつけないとメインのコンパイルで一緒に入れてもらえません。逆に関数を試しに使いたいだけならft_をつけなければメインのものに影響しないので、わかりにくくならない範囲で好きに作ってください)
* ただし、作業中でコンパイルエラーが出てる場合は「00_」をつけること。これでmakeでコンパイルする時に一緒に混ざらないようになります。
* includeするのは「../includes/ft_tools.h」のみにする（unistdとかも入ってます。）

## 作業ルール
### 作業終了時にやること（これをやらずに作業をしたとは言わせない）
* ヘッダーファイル「ft_tools.h」に作成した関数のプロトタイプ宣言を記載する（関数が完成しない時は宣言しないでね）
* Makefileに作業が終わったソースコードのファイル名を忘れずに記載すること
* **作業中断時にpushを忘れずに！** PCの前で操作ができなくなる時間が発生するならすぐpushです。トイレのたびにとは言いませんが、相手がコードをみたいと思った時に見えるようにしてあげましょう！ **思いやり大事！**

### エラー番号（あまり思いつかなかったので、適宜足してください。各関数で１エラーは定義できると思います）
1. empty map(ft_outmap)
1. mallocミス

## 手順
###

### 文字列を元に行数の確認と１行の文字数をカウントする
void ft_test(t_map *res, char *path);
1. １つ目の改行までの文字数をカウントし、以降の基準（ccnt）にする
1. ２行目以降はccntと一致する限り改行を目印に行数をカウントする
1. 上で行った行数がt_map->lcntと一致すれば関数を終了させる

### 文字列から行数と記号を判定する
void ft_test(t_map *res, char *path);
1. resの文字列を受け取る
1. 先頭の数字を読み取ってunsigned longに変換する
1. 変換したunsigned longをt_map->lcntに代入する
1. 記号を読み取り、t_map->markにそれぞれ代入する
1. 最初の行分の文字を削除して、マップの情報だけをもつ文字列にしてあげる

### ファイルを読み込み、1と0を入れる
void ft_test(t_map *res, char *path);
1. ファイルを開く（open）
1. 上ででたdiscriptorを元にテキストを読み込む（read）
1. buf分読み終わっても、まだ残っていた場合は繰り返し処理をする
1. resに結果を追記していく
	resとbufを結合する方法
	tempの文字列を作成して、resをコピーする
	resをfree後に（temp + buf）分mallocする
	resにtempとbufを入れ込む
	以上を繰り返す
1. １行はccntを目安にt_map->mapに順次入れていく

### 最大の四角を計算して、始点と長さを入れる
void ft_test(t_map *void,)
1. 回答はt_map->start.x,y t_map->lenに入れる

### 四角を出力する
1. これまでにt_mapの中に必要な情報は入っているはずなので、それを元に出力する

### 構造体の定義は以下の通りです。
各関数の処理が終わった時点で埋まっているべきものを以下の必要な関数のところに記載しておきます。各自関数を作成する際にその直前の関数で出来上がったものを引数として渡されたと仮定して、コーディング、検証を進めてください。

typedef struct s_mark	mapで使われる記号を表す構造体（A)
{
	char	empty;		emptyを表す
	char	obstacle;	邪魔者を表す
	char	full;		回答の記号を表す
}	t_mark;

typedef struct s_point	mapで座標を表す構造体（B）
{
	unsigned long	x;			x座標
	unsigned long	y;			y座標
};	t_point;

typedef struct s_map
{
	unsigned long	lcnt;		1. 行数を入れる（inputから判断）
	unsigned long	ccnt;		2. 1行の文字数を入れる（inputから判断）
	t_mark			mark;		3. (A)を表す
	unsigned long	**map;		4. マップの中身を表す（数値の配列）
	t_point			start;		5. 回答の四角の右下の点（始点）
	unsigned long	len;		6. 回答の四角の長さ
	unsigned int	sq_type;	7. 回答の四角が回転する時を判断する為の入れ物（余裕があれば作るだけで、ひとまず0を入れて進めてください
	unsigned int	err;		8. エラー番号を入れていきます。何か問題が起こったら番号を決めて入れてください
}	t_map;

マップは数値の羅列にします。0は邪魔なオブジェクト（obstacle）をあらわし、1はフリーの場所をあらわします。詳しくはまっちゃんの説明を聞いてもらいたいです。

## マップメーカーの使い方
1. コマンドラインで、「perl mapmaker.pl $width $line_count $romdom_seed」を入力
1. コマンドライン上にマップが出来上がるので、それをechoなりクリップボードコピーなりでテキストファイルを作成する

width = 1行の文字数
line_count = 行数
rondom_seed = 邪魔オブジェクトの配置（ランダムになるので、適当でいいけど、数字を大きくすると数が増えていきます

## 課題リスト
### Makefile
* 実行ファイル名の指定がわからん
* オブジェクトファイルにするみたいなところが必要かわからん

~~map to file~~
* 構造体がいい気がする
* なので、構造体の宣言をヘッダーファイルにつっこみましょう

### エラー処理
* エラー番号を決める。
* main関数でint *err;を定義する。
* エラーが起こりうる関数処理の引数にerrをいれる。
* エラーが起こったらメッセージを吐きつつ、errにエラー番号代入して関数終了しましょう

## 以下は使いません！

必要な関数２が多分一番重いので、進めててわからなければ疑問をslackに投げて他の番号に移っていいです。

### 1A.標準出力の場合の入力データの整理
* inputのフォーマットを作成する
* その際に注意書きをしてあげると優しい

### 1B.マップデータを読み込む
* ファイルパスからデータを読み込む
* マップの行数をカウントする（これで繰り返し処理の限界値が決まる重要なやつ）
* マップで使われる文字を確認する
* マップ自体を構造体にぶち込む

### 2a.大きい四角を探す
* 左上から、現在の座標から左、上、左上を見てその座標の値と3点の最小値をたす。(その時に、最大値と座標を確保してもいいかも)
* 左上から、一番大きい値とその座標を探す。
* その座標と最大値との差で、各頂点がわかる。

### 2b.大きい四角を探す（ひし形の時）←これはプラスアルファなので飛ばしてください。
* 左上の起点と右下の終点を規定するのは2aと変わらない
* 四角の書き方が難しくなるので、ルールを整理する必要あり
* 2aよりだいぶ手間がかかるので、とりあえずは放置。余裕があればやりましょう。ひとまず2aで動くことが大前提です。

### 3.描いた四角の大きさを保存する
* その時点で一番大きい四角が描けた箇所の「始端、大きさ」の情報を保管しておく
* 2のプログラムの中でこのプログラムを実行して、随時更新する
* 実行前にその前に使ってる保存領域をfreeする
* mallocで領域を確保する（単に配列がリセットされるならなんでもいい）

### ~~4.過去一大きい四角を確定させて、文字列を書き換える　→作成中（小松）~~
* ~~2を繰り返し処理しきったあとに3のメモリに残っている情報を元に文字列の配列を置き換える~~
* ~~多分これは簡単~~
* 数値で最後にまとめて出力するので、特にいらなくなりました。その代わり処理を5でまとめて行います。

### 5.文字列をひたすら出力する(ft_putmap) →作成中（小松）
* 書き換えたマップをひたすらに出力する関数
* 元のマップと最大の四角形の座標を元に出力するプログラムにします。
