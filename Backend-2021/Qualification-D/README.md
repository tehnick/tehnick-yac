<div class="header">
<h1 class="title">D. Победитель олимпиады</h1>
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
</p><p style="text-indent: 0em;">Версию сервера для локального тестирования можно скачать по ссылке: <a href="https://disk.yandex.ru/d/MquCh2Pe_4ERIA"><span
style="font-family: monospace;">https://disk.yandex.ru/d/MquCh2Pe_4ERIA</span></a> . Для запуска сервера стоит использовать
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
