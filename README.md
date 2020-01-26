# BSQがんばろ

## ディレクトリ規則
### ディレクトリ構成
* BSQ.c : main関数が入ったファイル
* Makefile : コンパイルは毎回これでやりましょう。早めの準備を忘れずに
* srcs : とりあえずソースコードはここにひたすらぶち込む
* includes : ヘッダーファイルをここにぶち込む
* object : オブジェクトファイルはここにしまっておく？これはなくても大丈夫なら消します。

### 命名規則
* 基本的に使う関数名はnormに則ること
* 関数名、ファイル名共に頭に「ft_」をつけること！忘れずに！！！！！！
* includeするのは「../include/ft_tools.h」のみにする

# 作業ルール
### 作業終了時にやること（これをやらずに作業をしたとは言わせない）
* ヘッダーファイル「ft_tools.h」に使用した関数のプロトタイプ宣言を記載する
* Makefileに作業が終わったソースコードのファイル名を忘れずに記載すること