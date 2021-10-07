<div class="header">
<h1 class="title">E. Интервалы работы складов</h1>
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
