<div class="header">
<h1 class="title">C. Шашки</h1>
<table>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>1&nbsp;секунда</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256Mb</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colspan="1">стандартный ввод или input.txt</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colspan="1">стандартный вывод или output.txt</td>
</tr>
</table>
</div>
<h2></h2>
<div class="legend">
<!--l. 48-->
<p style="text-indent: 0em;">Разработчики любят проводить свободное время за настольными играми. Иногда это шахматы, иногда
— UNO, а иногда — шашки. Однако, когда неопытные игроки садятся за шашки, они периодически допускают ошибки (прямо как в программировании!)
и не рубят шашку соперника, когда такая возможность есть. <!--l. 50-->
</p><p style="text-indent: 0em;">Чтобы избежать ошибок, разработчики решили написать программу, которая будет по текущей позиции
определять, можно ли сходить так, чтобы срубить шашку противника. Но прямо сейчас у них много других важных проектов, поэтому
запрограммировать анализатор позиции попросили вас. <!--l. 52-->
</p><p style="text-indent: 0em;">Для тех, кто давненько не брал в руки шашек, напомним правила: <!--l. 54-->
</p><p style="text-indent: 0em;">- все шашки стоят на полях одного цвета; <!--l. 56-->
</p><p style="text-indent: 0em;">- одна шашка может срубить другую, если та стоит на соседней клетке по диагонали и при этом
в следующей диагональной клетке в направлении соперника нет никакой другой шашки. </p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<!--l. 60-->
<p style="text-indent: 0em;">В первой строке даны числа <!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math>
и <!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math>
(<!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>N</mi><mo>,</mo><mi>M</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>3</mn></mrow></msup></math>) —
размеры доски, на которой разработчики играют в шашки. Каждое поле имеет свой цвет: черный или белый. При этом гарантируется,
что поле с координатами <!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn><mo>;</mo><mn>1</mn></mrow><mo>)</mo></mrow></math>
имеет черный цвет. Гарантируется также, что поле, имеющее общую границу с черным полем, будет иметь белый цвет, а поле, имеющее
общую границу с белым полем, — черный цвет. <!--l. 62-->
</p><p style="text-indent: 0em;">В следующей строке дано число <!--l. 62--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mi>w</mi></math> — количество белых шашек на поле. В следующих <!--l. 62--><math
display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>w</mi></math> строках задаются два
целых числа <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>
и <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>j</mi></math>
(<!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>i</mi> <mo>≤</mo> <mi>N</mi><mo>,</mo><mn>1</mn> <mo>≤</mo> <mi>j</mi> <mo>≤</mo> <mi>M</mi></math>) — поля, на которых
стоят белые шашки. В следующей строке дано число <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math>
— количество черных шашек на поле. В следующих <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math>
строках задаются поля с черными шашками, точно так же, как и с белыми. Гарантируется, что количество шашек каждого цвета —
целое положительное число, и что <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn>
<mo>≤</mo> <mi>w</mi> <mo>+</mo> <mi>b</mi> <mo>≤</mo> <mrow><mo>(</mo><mrow><mi>N</mi><mi>M</mi> <mo>+</mo> <mn>1</mn></mrow><mo>)</mo></mrow><mo>∕</mo><mn>2</mn></math>.
Гарантируется, что все шашки стоят на черных полях. <!--l. 64-->
</p><p style="text-indent: 0em;">В заключительной строке ввода указано, чей ход: “white”, если белых, и “black” — если черных.
</p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> В единственной строке выведите “Yes”, если автор хода может срубить шашку соперника, и “No” в противоположном случае. </div>
<h3>Пример 1</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>8 8
3
1 1
2 6
6 6
3
2 2
7 7
8 8
white
</pre></td>
<td><pre>Yes
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 2</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>8 8
2
2 2
3 3
2
7 7
8 8
black
</pre></td>
<td><pre>No
</pre></td>
</tr>
</tbody>
</table>
