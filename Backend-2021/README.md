# Yandex Cup, Backend 2021

## Qualification

- [x] [A. MEW HTTP](#Qualification-A)
- [ ] [B. Палеты](#Qualification-B)
- [x] [C. Шашки](#Qualification-C)
- [ ] [D. Победитель олимпиады](#Qualification-D)
- [x] [E. Интервалы работы складов](#Qualification-E)
- [ ] [F. Музыкальные жанры](#Qualification-F)

На решение отводится 4 часа.


<link rel="stylesheet" type="text/css" href="style.css">


<hr>

<div class="header">
<h1 class="title" id="Qualification-A">A. MEW HTTP</h1>
<table class="limits">
<tbody>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>2 секунды</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256.0 Мб</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colSpan="1">стандартный ввод</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colSpan="1">стандартный вывод</td>
</tr>
</tbody>
</table>
</div>
<h2></h2>
<div class="legend">
<div class="Markdown">
<p class="paragraph">В центре нестандартных исследований создали HTTP сервис, который работает только по запросам методом <code>MEW</code>. Вам нужно получить от сервиса значения четырех заданных переменных. Имена запрашиваемых переменных в <code>MEW</code> запросе передаются с помощью HTTP заголовков <code>X-Cat-Variable</code>. При этом имена не должны повторяться. Можно как передавать несколько имен в одном заголовке, так и передавать каждое имя в отдельном заголовке. Сервер передает значения запрошенных переменных в HTTP заголовках ответа <code>X-Cat-Value</code> в лексикографическом порядке, то есть отсортированные по значению переменных, а не по имени. Каждое значение передается в отдельном заголовке. Имена заголовков можно отправлять в любом регистре и имена заголовков в ответе также могут быть записаны в любом регистре. Чтобы уменьшить время отклика, нужно получить значения переменных, сделав не больше трех запросов.</p>
</div>
</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<div class="Markdown">
<p class="paragraph">В четырех строках записаны различные имена требуемых переменных, которые могут состоять из больших и маленьких латинских букв и цифр. Длина имен — от 1 до 100 символов.</p>
<p class="paragraph">Запросы к серверу делаются по адресу: <a href="http://127.0.0.1:7777/">http://127.0.0.1:7777/</a>. В случае неправильных запросов или превышения числа запросов сервер будет возвращать код 404. Не пытайтесь подключиться к серверу до того, как получите имена переменных. У входного потока нет признака конца файла, поэтому из него нельзя читать больше четырех строк.</p>
</div>
</div>
<h2>Формат вывода</h2>
<div class="output-specification">
<div class="Markdown">
<p class="paragraph">Запишите в четырех строках значения переменных. Все значения будут состоять только из больших и маленьких латинских букв и цифр. Длина значений — от 1 до 100 символов.</p>
</div>
</div>
<h2></h2>
<div>
<h3 class="sample-tests-header">Пример 1</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td>
<pre>Window
Bird
Food
Human
</pre>
</td>
<td>
<pre>Entertainment
Prey
Heaven
Pillow
</pre>
</td>
</tr>
</tbody>
</table>
</div>
<div>
<h3 class="sample-tests-header">Пример 2</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td>
<pre>Morning
Afternoon
Evening
Night
</pre>
</td>
<td>
<pre>Sleep
Sleep
Sleep
Play
</pre>
</td>
</tr>
</tbody>
</table>
</div>
<h2>Примечания</h2>
<div class="notes">
<div class="Markdown">
<p class="paragraph">Для решений на языке <strong>C++</strong> доступна библиотека <a href="https://curl.haxx.se/libcurl/">libcurl</a> v7.47.0. Соответствующая директива #include выглядит так:</p>
<div class="code">
<pre><code>#include &lt;curl/curl.h&gt;</code></pre>
</div>
<p class="paragraph">Версию сервера для локального тестирования можно скачать из архива: <a href="./tests/Qualification-A/">tests/Qualification-A</a></p>
</div>
</div>


<hr>

<div class="header">
<h1 class="title" id="Qualification-B">B. Палеты</h1>
<table>
<thead>
<th></th>
<th>Все языки</th>
<th>Python 3.7 + network + requests</th>
</thead>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>3&nbsp;секунды</td>
<td>6&nbsp;секунд</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256Mb</td>
<td>256Mb</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colspan="2">стандартный ввод или input.txt</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colspan="2">стандартный вывод или output.txt</td>
</tr>
</table>
</div>
<h2></h2>
<div class="legend"> Поставки товаров прибывают в распределительный центр, хранятся там и затем отправляются на склады. Каждая поставка состоит
из множества палет и коробок (возможно, пустого). Все палеты и коробки имеют <!--l. 47--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>e</mi><mi>l</mi><mi>i</mi><mi>v</mi><mi>e</mi><mi>r</mi><msub><mrow><mi>y</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>&nbsp;—
идентификатор поставки. <!--l. 50-->
<p style="text-indent: 0em;">Палеты и коробки имеют поле <!--l. 50--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>&nbsp;—
это идентификатор палеты или коробки, в которую вложена данная. Если <!--l. 50--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub>
<mo>=</mo> <mn>0</mn></math>, то это палета, иначе&nbsp;— коробка. Отправлять на склад можно только палеты. Чтобы палеты и
коробки можно было отправить на склад, должны выполняться следующие условия: </p><ul>
<li>Коробку, не размещенную в палете или другой коробке, отправлять нельзя; </li>
<li>Если существует коробка, которая еще не пришла от поставщиков или которую нельзя отправить, то нельзя отправить на склад
и коробку или палету, в которую она вложена.</li>
</ul>
<!--l. 57-->
<p style="text-indent: 0em;">Зная, что в данный момент прибыли только поставки с определенными номерами, определите, какие
палеты возможно отправить на склад уже сейчас. </p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> В первой строке задано одно целое число <!--l. 61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
(<!--l. 61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>n</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>6</mn></mrow></msup></math>)&nbsp;— общее количество
палет и коробок. <!--l. 63-->
<p style="text-indent: 0em;">Во второй строке записано <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
целых чисел <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>e</mi><mi>l</mi><mi>i</mi><mi>v</mi><mi>e</mi><mi>r</mi><msub><mrow><mi>y</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>
(<!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>d</mi><mi>e</mi><mi>l</mi><mi>i</mi><mi>v</mi><mi>e</mi><mi>r</mi><msub><mrow><mi>y</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub>
<mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup></math>)&nbsp;— идентификаторы поставки. <!--l.
65-->
</p><p style="text-indent: 0em;">В третьей строке записано <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
целых чисел <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>
(<!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo>
<mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub> <mo>≤</mo>
<mi>n</mi></math>)&nbsp;— номера коробок, в которые должна быть вложена палета или другая коробка. Коробка не может быть вложена
сама в себя (в том числе через другие коробки). Если <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub>
<mo>=</mo> <mn>0</mn></math>, то это палета и ее никуда класть не нужно. <!--l. 67-->
</p><p style="text-indent: 0em;">В четвертой строке задано единственное целое число <!--l. 67--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math> (<!--l. 67--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo> <mi>k</mi> <mo>≤</mo> <mi>n</mi></math>)&nbsp;— количество
поставок, которые еще не приехали в распределительный центр. <!--l. 69-->
</p><p style="text-indent: 0em;">При <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi>
<mo>≥</mo> <mn>1</mn></math> в последней строке записано <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>
целых чисел <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup></math>)&nbsp;—
идентификаторы поставок, палеты и коробки из которых не были доставлены в распределительный центр. Гарантируется, что хотя
бы одна палета или коробка имела такой идентификатор <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>.
</p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> В первой строке выведите одно целое число <!--l. 72--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>&nbsp;—
количество палет, которые можно отправить на склад. <!--l. 74-->
<p style="text-indent: 0em;">Во второй строке выведите номера палет от меньшего к большему. </p>

</div>
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
<td><pre>5
1 1 1 2 2
0 1 1 0 4
1
2
</pre></td>
<td><pre>1
1 
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
<td><pre>5
1 1 2 2 2
0 1 1 0 4
1
2
</pre></td>
<td><pre>0
</pre></td>
</tr>
</tbody>
</table>


<hr>

<div class="header">
<h1 class="title" id="Qualification-C">C. Шашки</h1>
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


<hr>

<div class="header">
<h1 class="title" id="Qualification-D">D. Победитель олимпиады</h1>
<table>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>4&nbsp;секунды</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256Mb</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colspan="1">стандартный ввод</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colspan="1">стандартный вывод</td>
</tr>
</table>
</div>
<h2></h2>
<div class="legend">
<!--l. 48-->
<p style="text-indent: 0em;">В последнее время проводится очень много чемпионатов, на которых участники демонстрируют свои
навыки разработки программного обеспечения. Эти чемпионаты проводятся на разных платформах, поэтому таблицы с результатами
в итоге получаются неконсистентными друг с другом. Небольшая команда энтузиастов решила сделать единый формат турнирной таблицы.
Для этого им нужно получить доступ к списку участников соревнования, а также к логу посылок решений на проверяющий сервер.
Вашей задачей будет собрать информацию об участниках соревнования и определить победителей. <!--l. 50-->
</p><p style="text-indent: 0em;">Все соревнования проводятся по одним и тем же правилам. Участник отправляет вариант решения
для выбранной задачи на проверку и получает один из пяти вариантов ответа от сервера: </p><ul>
<li><span style="font-family: monospace;">OK</span>&nbsp;— правильное решение; </li>
<li><span style="font-family: monospace;">CE</span>&nbsp;— участник допустил синтаксическую или семантическую ошибку при реализации,
данные варианты решения игнорируются проверяющей системой; </li>
<li><span style="font-family: monospace;">WA</span>&nbsp;— участник допустил ошибку в алгоритме решения задачи; </li>
<li><span style="font-family: monospace;">TL</span>&nbsp;— решение участника недостаточно эффективно и работает слишком долго;
</li>
<li><span style="font-family: monospace;">RE</span>&nbsp;— в процессе работы программы произошла ошибка.</li>
</ul>
<!--l. 59-->
<p style="text-indent: 0em;">Вердикт “OK” означает, что участник успешно решил задачу. Вердикт “CE” игнорируется поисковой
системой и не считается ни правильным, ни неправильным. За каждую решенную задачу начисляется штраф, равный числу минут, прошедшему
с начала соревнования до первой успешной попытки решения (вердикта “OK”). Все попытки решения задачи после первой успешной
игнорируются. Дополнительно при успешном решении задачи начисляется штраф, равный количеству неправильных попыток, умноженных
на 20 штрафных минут. При подсчете неправильных попыток не учитывается вердикт “CE”. Общий штраф участника равен сумме штрафов
за все задачи, которые были решены. Если по задаче не было успешных посылок, за нее не назначается дополнительный штраф. <!--l.
61-->
</p><p style="text-indent: 0em;">Победителем турнира является участник, который решил больше всего задач. Если таких участников
несколько, то побеждает тот, у кого наименьшее значение общего штрафа за все решенные задачи. Если и таких участников несколько,
то каждый из них становится победителем. </p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<!--l. 66-->
<p style="text-indent: 0em;">Перед взаимодействием с сервером нужно получить название соревнования. Название соревнования
содержится в первой строке стандартного потока ввода и состоит из прописных и заглавных латинских букв, цифр и символа «_».
Длина названия не превосходит двадцати символов. Далее это название нужно передавать во все методы в качестве параметра. <!--l.
68-->
</p><p style="text-indent: 0em;">Взаимодействие с сервером можно осуществлять следующими методами: </p><ol style="list-style-type:
decimal;">
<li><span style="font-family: monospace;">GET /view/participants</span>&nbsp;— позволяет получить список участников чемпионата.
<!--l. 72-->
<p style="margin-bottom: 0.5em; text-indent: 0em;">Каждый участник характеризуется объектом <span style="font-family: monospace;">participant</span>,
в котором есть ровно одно поле <span style="font-family: monospace;">login</span>&nbsp;— его логин. Логин представляет собой
строку, состоящую из прописных и заглавных латинских букв, цифр и символа «_». У разных участников не может быть совпадающих
логинов. Длина каждого логина не превосходит десяти символов. <!--l. 74-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;">Список участников возвращается в формате XML в виде объекта <span style="font-family:
monospace;">participants</span>, который является массивом объектов <span style="font-family: monospace;">participant</span>.
Гарантируется, что в чемпионате будет хотя бы один участник и что суммарное число участников не превосходит 500. <!--l. 76-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;">Пример: при вызове метода <!--l. 78-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;"><span style="font-family: monospace;">GET /view/participants?contest=backend_contest</span><!--l.
80-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;">возможен следующий ответ: </p><div style="clear: both; font-family:
monospace; text-align: left; white-space: nowrap;"> &lt;?xml&nbsp;version="1.0"&nbsp;encoding="UTF-8"?&gt; &nbsp;<br>&lt;participants&gt;
&nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&lt;participant&nbsp;login="polycarp"&nbsp;/&gt; &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&lt;participant&nbsp;login="bytecarp"&nbsp;/&gt;
&nbsp;<br>&lt;/participants&gt;</div>
<!--l. 87-->
<p style="margin-bottom: 0.5em; text-indent: 0em;">
</p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>
</li>
<li><span style="font-family: monospace;">GET /view/submissions</span>&nbsp;— позволяет получить список посылок конкретного
участника. Для вызова метода нужно передать в параметр <span style="font-family: monospace;">login </span>логин участника.
<!--l. 91-->
<p style="margin-bottom: 0.5em; text-indent: 0em;">Каждая посылка характеризуется объектом <span style="font-family: monospace;">submission</span>,
в котором есть три поля: </p><ul>
<li><span style="font-family: monospace;">timestamp</span>&nbsp;— число минут, прошедших после начала соревнования, за которое
участник отправил данный вариант решения; </li>
<li><span style="font-family: monospace;">problem</span>&nbsp;— идентификатор задачи, является заглавной буквой латинского
алфавита; </li>
<li><span style="font-family: monospace;">verdict</span>&nbsp;— один из пяти вердиктов, описанных выше.</li>
</ul>
<!--l. 98-->
<p style="margin-bottom: 0.5em; text-indent: 0em;">Список посылок возвращается в формате XML в виде объекта <span style="font-family:
monospace;">submissions</span>, который является массивом объектов <span style="font-family: monospace;">submission</span>.
Гарантируется, что суммарное количество посылок от всех участников не превышает <!--l. 98--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math>,
а число минут, за которое была сделана посылка, удовлетворяет неравенству <!--l. 98--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo> <mi>t</mi><mi>i</mi><mi>m</mi><mi>e</mi><mi>s</mi><mi>t</mi><mi>a</mi><mi>m</mi><mi>p</mi>
<mo>≤</mo> <mn>1</mn><mn>4</mn><mn>4</mn><mn>0</mn><mn>0</mn></math>. <!--l. 100-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;">Пример: при вызове метода <!--l. 102-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;"><span style="font-family: monospace;">GET /view/submissions?contest=backend_contest&amp;login=polycarp</span><!--l.
104-->
</p><p style="margin-bottom: 0.5em; text-indent: 0em;">возможен следующий ответ: </p><div style="clear: both; font-family:
monospace; text-align: left; white-space: nowrap;"> &lt;?xml&nbsp;version="1.0"&nbsp;encoding="UTF-8"?&gt; &nbsp;<br>&lt;submissions&gt;
&nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&lt;submission&nbsp;timestamp="63"&nbsp;problem="A"&nbsp;verdict="OK"&nbsp;/&gt; &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&lt;submission&nbsp;timestamp="18"&nbsp;problem="B"&nbsp;verdict="WA"&nbsp;/&gt;
&nbsp;<br>&lt;/submissions&gt;</div>
<!--l. 111-->
<p style="margin-bottom: 0.5em; text-indent: 0em;">
</p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>
</li>
</ol>
<!--l. 114-->
<p style="text-indent: 0em;">Запросы к серверу делаются по адресу: http://127.0.0.1:7777/. Не пытайтесь подключиться к серверу
до того, как получите название соревнования. У входного потока нет признака конца файла, поэтому из него нельзя читать больше
одной строки. </p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> В первой строке выходных данных нужно вывести число <!--l. 117--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
— количество победителей на соревновании. В следующих <!--l. 118--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
строках необходимо вывести логины победителей в лексикографическом порядке, каждого в отдельной строке. 
</div>
<h2>Пример</h2>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>backend_contest
2
monocarp
1
70 A OK
polycarp
2
18 B WA
63 A OK
</pre></td>
<td><pre>1
polycarp
</pre></td>
</tr>
</tbody>
</table>
<h2>Примечания</h2>
<div class="notes">
<!--l. 122-->
<p style="text-indent: 0em;">Для решений на языке <span style="font-weight: bold;">Python </span>доступны библиотеки requests
и urllib. <!--l. 124-->
</p><p style="text-indent: 0em;">Для решений на языке <span style="font-weight: bold;">C++ </span>доступна библиотека <span
style="font-family: monospace;">libcurl</span>. Соответствующая директива include выглядит так: </p><div style="clear: both;
font-family: monospace; text-align: left; white-space: nowrap;"> #include&nbsp;&lt;curl/curl.h&gt;</div>
<!--l. 127-->
<p style="text-indent: 0em;">
<!--l. 129-->
</p><p style="text-indent: 0em;">Для решений на языке <span style="font-weight: bold;">Golang </span>доступны все стандартные
пакеты, включая net/http, sort и другие. <!--l. 131-->
</p><p style="text-indent: 0em;">Версию сервера для локального тестирования можно скачать по ссылке: <a href="./tests/Qualification-D/"><span
style="font-family: monospace;">tests/Qualification-D</span></a>. Для запуска сервера стоит использовать
следующую команду: <!--l. 133-->
</p><p style="text-indent: 0em;"><span style="font-family: monospace;">python3 winner_server.py input.txt</span>, <!--l. 135-->
</p><p style="text-indent: 0em;">где <span style="font-family: monospace;">input.txt</span>&nbsp;— файл входных данных в том
же формате, что дан в примере. </p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>


<hr>

<div class="header">
<h1 class="title" id="Qualification-E">E. Интервалы работы складов</h1>
<table class="limits">
<tbody>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>1 секунда</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256.0 Мб</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colSpan="1">стандартный ввод или input.txt</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colSpan="1">стандартный вывод или output.txt</td>
</tr>
</tbody>
</table>
</div>
<h2></h2>
<div class="legend">
<div class="Markdown">
<p class="paragraph">У большого онлайн-магазина есть несколько складов. Не всякий товар можно хранить на любом из складов. Какие-то из складов не оборудованы холодильниками и не могут хранить замороженные продукты. Некоторые из складов небольшие, там некуда поставить крупногабаритный товар. Менеджеры заполняют таблицу, в которой указывают, когда, какие товары и на какой склад можно привозить, но делают это в удобном для себя формате. Нужно преобразовать их записи в форму, которую сможет распознавать система распределения товаров.</p>
</div>
</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<div class="Markdown">
<p class="paragraph">На вход подается CSV-файл со следующими полями: </p>
<ol start="1">
<li>Идентификатор склада — целое неотрицательное число <span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML">
<semantics>
<mrow>
<mi>i</mi>
</mrow>
<annotation encoding="application/x-tex">i</annotation>
</semantics>
</math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.65952em;vertical-align:0em;"></span><span class="mord mathnormal">i</span></span></span></span> (<span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML">
<semantics>
<mrow>
<mn>0</mn>
<mo>≤</mo>
<mi>i</mi>
<mo>≤</mo>
<mn>9</mn>
</mrow>
<annotation encoding="application/x-tex">0 \le i \le 9</annotation>
</semantics>
</math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.78041em;vertical-align:-0.13597em;"></span><span class="mord">0</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.79549em;vertical-align:-0.13597em;"></span><span class="mord mathnormal">i</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span><span class="mrel">≤</span><span class="mspace" style="margin-right:0.2777777777777778em;"></span></span><span class="base"><span class="strut" style="height:0.64444em;vertical-align:0em;"></span><span class="mord">9</span></span></span></span>);</li>
<li>Интервал дат работы — начало и конец интервала в формате <strong>YYYY-MM-DD</strong>, разделенные пробелом;</li>
<li>Тип товара — одно из строковых значений <strong>KGT</strong>, <strong>COLD</strong>, <strong>OTHER</strong>, <strong>NULL</strong>.</li>
</ol>
<p class="paragraph">Если в поле &quot;Тип товара&quot; стоит <strong>NULL</strong>, то в указанный интервал дат склад принимает любые типы товаров. Гарантируется, что конец интервала не превосходит начало интервала. Также гарантируется, что число записей в файле не превосходит <span class="katex"><span class="katex-mathml"><math xmlns="http://www.w3.org/1998/Math/MathML">
<semantics>
<mrow>
<mn>1</mn>
<msup>
<mn>0</mn>
<mn>4</mn>
</msup>
</mrow>
<annotation encoding="application/x-tex">10^4</annotation>
</semantics>
</math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height:0.8141079999999999em;vertical-align:0em;"></span><span class="mord">1</span><span class="mord"><span class="mord">0</span><span class="msupsub"><span class="vlist-t"><span class="vlist-r"><span class="vlist" style="height:0.8141079999999999em;"><span style="top:-3.063em;margin-right:0.05em;"><span class="pstrut" style="height:2.7em;"></span><span class="sizing reset-size6 size3 mtight"><span class="mord mtight">4</span></span></span></span></span></span></span></span></span></span></span>.</p>
</div>
</div>
<h2>Формат вывода</h2>
<div class="output-specification">
<div class="Markdown">
<p class="paragraph">На выход нужно напечатать CSV-файл. Необходимо преобразовать входной файл так, чтобы выполнялись следующие условия:</p>
<ul>
<li>Записи отсортированы по идентификатору склада, затем по типу товара (<strong>KGT</strong> &lt; <strong>COLD</strong> &lt; <strong>OTHER</strong>), затем по началу интервала;</li>
<li>Интервалы для одного склада и одного типа товара не пересекаются. Пересекающиеся интервалы нужно объединить в один;</li>
<li>В выходном файле нет записей с типом товара <strong>NULL</strong>. Каждая запись с типом товара <strong>NULL</strong> во входном файле должна интерпретироваться как три разных записи с типами <strong>KGT</strong>, <strong>COLD</strong>, <strong>OTHER</strong>.</li>
</ul>
</div>
</div>
<h2></h2>
<div>
<h3 class="sample-tests-header">Пример 1</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td>
<pre>4,2020-02-23 2020-11-01,KGT
4,2020-03-15 2020-07-12,COLD
0,2020-03-28 2021-01-31,KGT
5,2020-04-01 2020-08-25,OTHER
2,2020-11-11 2021-08-10,KGT
</pre>
</td>
<td>
<pre>0,2020-03-28 2021-01-31,KGT
2,2020-11-11 2021-08-10,KGT
4,2020-02-23 2020-11-01,KGT
4,2020-03-15 2020-07-12,COLD
5,2020-04-01 2020-08-25,OTHER
</pre>
</td>
</tr>
</tbody>
</table>
</div>
<div>
<h3 class="sample-tests-header">Пример 2</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td>
<pre>6,2020-10-18 2021-08-22,NULL
8,2020-01-22 2020-06-10,KGT
6,2020-09-03 2020-10-03,KGT
8,2020-09-03 2020-10-22,NULL
2,2020-06-13 2020-09-19,OTHER
2,2020-10-18 2021-08-23,NULL
5,2020-08-01 2021-06-03,COLD
7,2020-07-22 2021-05-26,KGT
0,2020-12-17 2021-07-02,NULL
</pre>
</td>
<td>
<pre>0,2020-12-17 2021-07-02,KGT
0,2020-12-17 2021-07-02,COLD
0,2020-12-17 2021-07-02,OTHER
2,2020-10-18 2021-08-23,KGT
2,2020-10-18 2021-08-23,COLD
2,2020-06-13 2020-09-19,OTHER
2,2020-10-18 2021-08-23,OTHER
5,2020-08-01 2021-06-03,COLD
6,2020-09-03 2020-10-03,KGT
6,2020-10-18 2021-08-22,KGT
6,2020-10-18 2021-08-22,COLD
6,2020-10-18 2021-08-22,OTHER
7,2020-07-22 2021-05-26,KGT
8,2020-01-22 2020-06-10,KGT
8,2020-09-03 2020-10-22,KGT
8,2020-09-03 2020-10-22,COLD
8,2020-09-03 2020-10-22,OTHER
</pre>
</td>
</tr>
</tbody>
</table>
</div>
<div>
<h3 class="sample-tests-header">Пример 3</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td>
<pre>7,2020-08-05 2020-11-20,OTHER
9,2020-08-30 2021-02-27,NULL
8,2020-11-09 2021-09-07,OTHER
</pre>
</td>
<td>
<pre>7,2020-08-05 2020-11-20,OTHER
8,2020-11-09 2021-09-07,OTHER
9,2020-08-30 2021-02-27,KGT
9,2020-08-30 2021-02-27,COLD
9,2020-08-30 2021-02-27,OTHER
</pre>
</td>
</tr>
</tbody>
</table>
</div>


<hr>

<div class="header">
<h1 class="title" id="Qualification-F">F. Музыкальные жанры</h1>
</div>
<h2></h2>
<div class="legend">
<div class="Markdown">
<p class="paragraph">Борис работает с метаданными в сервисе Музыка. Он подготовил большое обновление данных по музыкальным жанрам, но столкнулся с проблемой: в результате этого обновления для треков будут указаны жанры, про которые знают далеко не все пользователи. Например, не так много людей знает, что страйд - это поджанр джаза. Если рядом с треком будет указано, что его жанр — это не только страйд, но и джаз, пользователям будет проще. Помогите Борису написать запрос, который для всех треков вернет все жанры, к которым эти треки принадлежат.</p>
</div>
</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<div class="Markdown">
<p class="paragraph">Ниже приведены DDL для создания таблиц с данными о жанрах и треках</p>
<p class="paragraph">Жанры:</p>
<div class="code">
<pre><code>CREATE TABLE genre
(
    id bigint PRIMARY KEY,
    name varchar(100) NOT NULL,
    parent_genre_id bigint,
    FOREIGN KEY (parent_genre_id) REFERENCES genre(id)
);</code></pre>
            </div>
            <p class="paragraph">Треки:</p>
            <div class="code">
<pre><code>CREATE TABLE track
(
    id bigint PRIMARY KEY ,
    name varchar(100) NOT NULL
);</code></pre>
            </div>
            <p class="paragraph">Связь трека и жанра:</p>
            <div class="code">
<pre><code>CREATE TABLE track_genre
(
    track_id bigint,
    genre_id bigint,
    PRIMARY KEY(track_id, genre_id),
    FOREIGN KEY (track_id) REFERENCES track(id),
    FOREIGN KEY (genre_id) REFERENCES genre(id)
);</code></pre>
</div>
<p class="paragraph">Гарантируется, что таблица <code>genre</code> описывает древовидную иерархию жанров и не содержит циклических зависимостей.</p>
</div>
</div>
<h2>Формат вывода</h2>
<div class="output-specification">
<div class="Markdown">
<p class="paragraph">Необходимо написать запрос, который для каждого трека возвращает все жанры, к которым этот трек принадлежит, в следующем формате:</p>
<p class="paragraph"><code>track_id</code> — id трека</p>
<p class="paragraph"><code>genre_id</code> — id жанра</p>
<p class="paragraph"><code>track_name</code> — наименование трека</p>
<p class="paragraph"><code>genre_name</code> — наименование жанра</p>
<p class="paragraph">Записи должны быть отсортированы по возрастанию id треков. При равенстве id треков записи необходимо отсортировать по возрастанию id жанров.</p>
</div>
</div>
<h2>Примечания</h2>
<div class="notes">
<div class="Markdown">
<p class="paragraph">Предположим, есть следующая иерархия жанров Rock -&gt; Metal -&gt; Trash Metal, то есть Trash Metal является поджанром Metal, а Metal является поджанром Rock. Если у трека есть связь с жанром Metal, то запрос должен вернуть жанры Rock и Metal. Жанр Trash Metal в результат попасть не должен.</p>
<p class="paragraph">Обратите внимание: если ваш запрос вернет неверный набор столбцов или попытается обратиться к несуществующим таблицам или столбцам, ваше решение получит вердикт &quot;Crash&quot;. Кроме того, к такому вердикту может привести использование DDL, в том числе для создания временных таблиц или представлений.</p>
<p class="paragraph">Для проверки решений используется СУБД SQLite.</p>
<p class="paragraph">Если вы хотите протестировать запрос до отправки в систему, но у вас не установлено среды для работы с базами данных, вы можете воспользоваться любой online-средой, например, <a href="https://sqliteonline.com">https://sqliteonline.com</a></p>
<h2>Пример</h2>
<p class="paragraph">Скрипт с примером заполнения базы данных можно скачать по ссылке: <a href="./tests/Qualification-F/">tests/Qualification-F</a></p>
<p class="paragraph">Для этого примера результат выполнения запроса должен быть следующим:</p>
<table>
<thead>
<tr>
<th scope="col">track_id</th>
<th scope="col">genre_id</th>
<th scope="col">track_name</th>
<th scope="col">genre_name</th>
</tr>
</thead>
<tbody>
<tr>
<td>1</td>
<td>2</td>
<td width="300px">Hallowed Be Thy Name</td>
<td>rock</td>
</tr>
<tr>
<td>1</td>
<td>8</td>
<td width="300px">Hallowed Be Thy Name</td>
<td>metal</td>
</tr>
<tr>
<td>1</td>
<td>12</td>
<td width="300px">Hallowed Be Thy Name</td>
<td>heavy metal</td>
</tr>
<tr>
<td>2</td>
<td>2</td>
<td>Boys Don&#x27;t Cry</td>
<td>rock</td>
</tr>
<tr>
<td>2</td>
<td>9</td>
<td>Boys Don&#x27;t Cry</td>
<td>punk rock</td>
</tr>
<tr>
<td>2</td>
<td>14</td>
<td>Boys Don&#x27;t Cry</td>
<td>post punk</td>
</tr>
<tr>
<td>3</td>
<td>3</td>
<td>Riding With The King</td>
<td>blues</td>
</tr>
<tr>
<td>4</td>
<td>2</td>
<td>You Give Love A Bad Name</td>
<td>rock</td>
</tr>
<tr>
<td>4</td>
<td>7</td>
<td>You Give Love A Bad Name</td>
<td>hard rock</td>
</tr>
<tr>
<td>5</td>
<td>2</td>
<td>Since I&#x27;ve Been Loving You</td>
<td>rock</td>
</tr>
<tr>
<td>5</td>
<td>3</td>
<td>Since I&#x27;ve Been Loving You</td>
<td>blues</td>
</tr>
<tr>
<td>5</td>
<td>7</td>
<td>Since I&#x27;ve Been Loving You</td>
<td>hard rock</td>
</tr>
</tbody>
</table>
</div>
</div>


<hr>

