<div class="header">
<h1 class="title">A. MEW HTTP</h1>
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
<p class="paragraph">Версию сервера для локального тестирования можно скачать из архива: <a href="https://disk.yandex.ru/d/U3gAN-7q4zz6Tg">https://disk.yandex.ru/d/U3gAN-7q4zz6Tg</a></p>
</div>
</div>
