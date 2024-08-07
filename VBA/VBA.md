# 控制语句

## 1.1 循环

### 1.1.1 for循环

~~~visual basic
For 循环变量 = 初始值 To 终值 Step = 步长值
	循环体
	Exit For
	循环体
Next 循环变量
~~~



### 1.1.2 do while循环

~~~
Do While 循环条件
	statement
Loop
~~~



## 1.2 条件

~~~
if 条件表达式1 Then
	statement1
elseif 条件表达式2 Then
	statement2
else
	statement3
End if
~~~



# excel对象与变量

## 2.1 变量

### 2.1.1 变量类型

1. 数值类型

	- 整数：Byte、Integer、Long
	- 浮点数：Single、Double、Decimal
	- 货币：Currency

2. 字符型
	- String
3. 日期
	- Data
4. 布尔型
		- Boolean
5. 变体型
	- Variant
6. 对象
7. 自定义类型

### 2.1.2 定义变量

~~~visual basic
Dim 变量名 As 数据类型
~~~

**变量名不区分大小写，可使用中文、英文、数字、下划线**

**常量**

~~~visual basic
Const 常量名 As 数据类型 = value
Const PI As Single = 3.14
~~~

对象

~~~visual basic
Dim obj As WorkSheet
Set obj = Sheets("SheetsName")
    obj.Range("A1") = value
~~~



## 2.2 对象

### 2.2.1 Application

### 2.2.2 WorkBook

### 2.2.3 WorkSheet

1. 选择工作表

~~~visual basic
Sheets("SheetsName").Select
Sheets("SheetsName").Activate
~~~

从功能上来说，Select代表选定对象，Activate代表激活对象。
从数量上来说，Select可以选定多个对象，Activate只能激活一个对象

2. 重命名

~~~visual basic
Sheets("SheetsName").Name = "new name"
~~~

3. 选择所有工作表

~~~visual basic
Sheets.Select
~~~

4. 新建工作表

①在Sheet1前面新建num张表

~~~visual basic
Sheets.Add before:=Sheets("Sheet1"),Count:=num
~~~

②在Sheet1后面新建num张表

~~~visual basic
Sheets.Add after:=Sheets("Sheet1"),Count:=num
~~~

③在最后一张工作表后面插入工作表

~~~visual basic
Sheets.Add after:=Sheets(Sheets.count)
~~~

④删除工作表

~~~visual basic
Sheets("SheetsName").Delete
~~~

⑤将工作表复制到指定位置

~~~visual basic
Sheets("SheetsName").Copy after:=Sheets(Sheets.Count)
~~~

⑥移动工作表

~~~visual basic
Sheets("SheetsName").move before:=Sheets(1)
~~~



### 2.2.4 单元格

1. Range

	1. 给指定单元格赋值

	~~~visual basic
	Sheet1.Range("A"&i)= Value
	~~~

	

1. Cells:当既要使用行又要使用列的时候使用

# 函数

## 3.1 函数定义

~~~visual basic
Function myfunc()
    Statement
End Function
~~~

## 3.2 函数调用

## 常用函数

- 去除字符串前的空格

~~~visual basic
Trim(Range())
~~~



# 其他

获得要处理的表格的行号：

第一行：IngFirstRow = ActiveSheet.UsedRange.Row

最后一行：IngLastRow = IngFirstRow + ActiveSheet.UsedRange.Rows.Count-1

计算一行中非空单元格个数

~~~visual basic
Application.WorksheetFunction.CountA(Rows())
~~~

- 关闭屏幕提示

~~~visual basic
Excel.application.DisplayAlerts = False
~~~

- 打开屏幕提示

~~~visual basic
Excel.application.DisplayAlerts = True
~~~

- 关闭屏幕更新

~~~visual basic
Excel.Application.ScreenUpdating = False
~~~

- 打开屏幕更新

~~~visual basic
Excel.Application.ScreenUpdating = True
~~~

- 调用其他函数

~~~visual basic
Call func
~~~

