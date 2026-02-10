//
// Created by Samarth Mahendra on 2/10/26.
//


// (file path, min, max)
// "2024-01-01/0001.parquet", "aaa", "app"
// "2024-01-01/0002.parquet", "baa", "cat"
// "2024-01-01/0003.parquet", "bob", "dad"
// "2024-01-01/0004.parquet", "eel", "fit"
// "2024-01-01/0005.parquet", "goo", "hop"
// "2024-01-01/0006.parquet", "ink", "lit"
// "2024-01-01/0007.parquet", "pop", "sit"
// "2024-01-01/0008.parquet", "run", "zoo"
// "2024-01-02/0001.parquet", "aaa", "app"
// "2024-01-02/0002.parquet", "baa", "cat"
// "2024-01-03/0001.parquet", "www", "yaa"
// "2024-01-04/0001.parquet", "ybb", "zzz"
//
// Lookup
// Input: <"2024-01-01", "website">, <"2024-01-04", "youth">, <"2024-01-01", "buzz">
// Output:
// <"2024-01-01", "website">: ["2024-01-01/0008.parquet"]
// <"2024-01-04", "youth">: ["2024-01-04/0001.parquet"]
