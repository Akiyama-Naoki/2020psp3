# 課題3 レポート
学生番号　氏名


## 課題  

以下の2つのアルゴリズムで文字列を検索するプログラムを作成する。  
- 力ずく法
- BM法

1. 使用するデータ  
以下のデータを使用する。ただし、検索対象文字列、検索する文字列は変更しても良い。  
    - StrOriginal: 検索対象データ
    - StrKey: 検索する文字列

2. 必須問題：実装する関数  
本課題では、以下の関数を実装する。C言語の標準ライブラリは使用しないこと。  
    (1) ForceSearch: 力ずく法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  

    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

    (2) BMSearch: BM法で文字列を検索する。  
    [入力]  
    - char text[]: 検索対象文字列  
    - char key[]: 検索する文字列  
 
    [出力]  
    - return値：検索する文字列が出現した場所(ポインタ)。ただし、検索する文字列が見つからない場合はNULL。  

3. 補助関数  
なし

## ソースコードの説明
l.22~30　文字列の先頭から比較して不一致の場合に対象文字列の最初を1つ移動させる。
l.32~32　検索文字列が全て一致すれば検索を終了する。
l.51~57　ずらし量のテーブルの作成
l.61~80　検索文字列の最後から比較して不一致の場合に不一致の文字に応じて比較位置を移動させる
l.83~86　検索文字列が全て一致すれば検索を終了する


## 出力結果

```
Force Search. Find keyword at:wind in my hair.
BM Search. Find keyword at:wind in my hair.
```

## 修正履歴
l.51~57　ずらし量のテーブルの作成
l.64~73　検索文字列の最後から比較して不一致の場合に不一致の文字に応じて比較位置を移動させる
l.77~80　検索文字列が全て一致すれば検索を終了する
