<div class="header">
<h1 class="title">A. Робот-секретарь (разминка)</h1>
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
<div class="legend"><span style="font-weight: bold;">Решение, проходящее все тесты, будет оценено в 2 балла.</span><!--l. 49-->
<p style="text-indent: 0em;">Настя любит программировать и увлекается старой компьютерной техникой. Однажды она увидела в
музее Яндекса робота для набора текста на печатной машинке. Настя захотела проверить, насколько оптимально работает робот.
<!--l. 51-->
</p><p style="text-indent: 0em;">Клавиатура печатной машинки состоит из 26 клавиш английского алфавита, клавиши пробела и
клавиши Shift, которая изменяет регистр следующей набранной буквы на противоположный текущему. Двойное же нажатие на клавишу
Shift изменяет текущий регистр машинки. В начале работы регистр всегда нижний, то есть при наборе без клавиши Shift будут
печататься строчные буквы. Пробел одинаково набирается в обоих регистрах. <!--l. 53-->
</p><p style="text-indent: 0em;">Настя хочет понять, за какое минимальное количество нажатий можно набрать текст, чтобы сравнить
это с результатами робота. <!--l. 55-->
</p><p style="text-indent: 0em;">Это разминочная задача, к которой мы размещаем готовое решения, чтобы вы могли познакомиться
с нашей автоматической системой проверки решений. Ввод и вывод осуществляется через файлы, либо через стандартные потоки ввода-вывода,
как вам удобнее. <!--l. 57-->
</p><p style="text-indent: 0em;">Пример решения на С++: <a href="https://pastebin.com/gUv33Cd9">https://pastebin.com/gUv33Cd9</a>.
В качестве компилятора выбирайте GNU C++ 14 4.9. </p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> Входные данные&nbsp;– строка <!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>
(<!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo><mo>|</mo><mi>s</mi><mo>|</mo><mo>≤</mo>
<mn>1</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>), состоящая из прописных
и строчных букв английского алфавита, а также символа пробела. 
</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Выведите единственное число&nbsp;— минимальное количество нажатий, необходимое, чтобы напечатать данную строку. </div>
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
<td><pre>Hello World
</pre></td>
<td><pre>13
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
<td><pre>APPLE II
</pre></td>
<td><pre>10
</pre></td>
</tr>
</tbody>
</table>
