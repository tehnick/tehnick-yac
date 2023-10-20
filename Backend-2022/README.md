# Yandex Cup, Backend 2022

## Qualification

- [x] [A. Коля и датацентры](#Qualification-A)
- [ ] [B. Средняя сетевая задержка](#Qualification-B)
- [x] [C. Система счисления](#Qualification-C)
- [x] [E. Иван и opensource](#Qualification-E)
- [ ] [F. Восстановление пользователей](#Qualification-F)
- [ ] [G. Сервис подписки](#Qualification-G)

На решение отводится 5 часов.


<link rel="stylesheet" type="text/css" href="style.css">


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-A">A. Коля и датацентры</h1>
      <table>
         <tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2.5&nbsp;секунд</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>512Mb</td>
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
   <div class="legend"> У каждой крупной IT-компании рано или поздно возникает необходимость иметь свои датацентры. <!--l. 49-->
      <p style="text-indent: 0em;">Коля недавно устроился в одну из таких компании стажёром. У компании есть <!--l. 49--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math> датацентров, каждый из которых имеет
      ровно по <!--l. 49--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math>
      серверов. <!--l. 51-->
      </p><p style="text-indent: 0em;">Из-за наплыва большого трафика и спешки в постройке датацентров, некоторые из серверов в
      каком-то из них выключаются, помогает только перезапуск всего датацентра. При этом каждый из датацентров характеризуется двумя
      неотрицательными целыми числами: <!--l. 53-->
      </p><p style="text-indent: 0em;">
      <!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>R</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
      - число перезапусков <!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-го
      датацентра и <!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>A</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
      - число рабочих (не выключенных) серверов на текущий момент в <!--l. 53--><math display="inline" style="text-indent: 0em;"
      xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-м датацентре. <!--l. 55-->
      </p><p style="text-indent: 0em;">Руководитель поручил Коле задачу по сбору некоторых метрик, которые помогут компании в дальнейшем
      в улучшении датацентров. Для этого Коле дали список из <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>Q</mi></math>
      событий, которые произошли за текущий день. Но, так как Коля ещё довольно неопытен в этом деле, он просит вас помочь с этим.
      </p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> В первой строке входных данных записано 3 положительных целых числа <!--l. 59--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>, <!--l. 59--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>, <!--l. 59--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math> (<!--l. 59--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>q</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup><mo>,</mo><mn>1</mn>
      <mo>≤</mo> <mi>n</mi> <mo>⋅</mo> <mi>m</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>6</mn></mrow></msup></math>)
      — число датацентров, число серверов в каждом из датацентров и число событий соответственно. <!--l. 61-->
      <p style="text-indent: 0em;">В последующих <!--l. 61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math>
      строках записаны события, которые могут иметь один из следующих видов: <!--l. 63-->
      </p><p style="text-indent: 0em;">RESET <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>
      — был перезагружен <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-й
      датацентр <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn>
      <mo>≤</mo> <mi>i</mi> <mo>≤</mo> <mi>n</mi></mrow><mo>)</mo></mrow></math><!--l. 65-->
      </p><p style="text-indent: 0em;">DISABLE <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math><!--l.
      65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>j</mi></math> — в <!--l.
      65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-м датацентре
      был выключен <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>j</mi></math>-й
      сервер <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn>
      <mo>≤</mo> <mi>i</mi> <mo>≤</mo> <mi>n</mi><mo>,</mo><mn>1</mn> <mo>≤</mo> <mi>j</mi> <mo>≤</mo> <mi>m</mi></mrow><mo>)</mo></mrow></math><!--l.
      67-->
      </p><p style="text-indent: 0em;">GETMAX — получить номер датацентра с наибольшим произведением <!--l. 67--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>R</mi></mrow><mrow><mi>i</mi></mrow></msub>
      <mo>∗</mo> <msub><mrow><mi>A</mi></mrow><mrow><mi>i</mi></mrow></msub></math><!--l. 69-->
      </p><p style="text-indent: 0em;">GETMIN — получить номер датацентра с наименьшим произведением <!--l. 69--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>R</mi></mrow><mrow><mi>i</mi></mrow></msub>
      <mo>∗</mo> <msub><mrow><mi>A</mi></mrow><mrow><mi>i</mi></mrow></msub></math></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> На каждый запрос вида GETMIN или GETMAX выведите единственное положительное целое число — номер датацентра, подходящий под
      условие. В случае неоднозначности ответа выведите номер наименьшего из датацентров. 
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
            <td><pre>3 3 12
DISABLE 1 2
DISABLE 2 1
DISABLE 3 3
GETMAX
RESET 1
RESET 2
DISABLE 1 2
DISABLE 1 3
DISABLE 2 2
GETMAX
RESET 3
GETMIN
</pre></td>
            <td><pre>1
2
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
            <td><pre>2 3 9
DISABLE 1 1
DISABLE 2 2
RESET 2
DISABLE 2 1
DISABLE 2 3
RESET 1
GETMAX
DISABLE 2 1
GETMIN
</pre></td>
            <td><pre>1
2
</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes"> Обратите внимание на 2 пример. DISABLE приходится для уже выключенного сервера. В данном случае сервер по-прежнему остаётся
      выключенным. 
   </div>
</div>
<a class="link" href="doc/Qualification-A.pdf">Скачать условие задачи</a></div>


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-B">B. Средняя сетевая задержка</h1>
   </div>
   <h2></h2>
   <div class="legend"> В одном из сервисов организована древовидная структура бэкендов. Запросы в сервис обрабатываются следующим образом: в корневой
      бэкенд (назовем его <span style="font-family: monospace;">balancer.test.yandex.ru</span>) поступает запрос, он формирует подзапросы
      в бэкенды-потомки (не более одного подзапроса в потомок), ожидает от них ответ, формирует свой ответ и отправляет его пользователю.
      Каждый из потомков обрабатывает подзапросы по той же схеме. На всех бэкендах регистрируются события следующей структуры: <ul>
      <li><span style="font-family: monospace;">datetime </span>– время наступления события; </li>
      <li><span style="font-family: monospace;">request\_id </span>– id запроса; </li>
      <li><span style="font-family: monospace;">parent\_request\_id </span>– id родительского запроса (для корневого бэкенда <span
      style="font-family: monospace;">NULL</span>); </li>
      <li><span style="font-family: monospace;">host </span>– имя бэкенда, на котором возникло событие; </li>
      <li><span style="font-family: monospace;">type </span>– тип события (список указан ниже); </li>
      <li><span style="font-family: monospace;">data </span>– описание события.</li>
      </ul>
      <!--l. 58-->
      <p style="text-indent: 0em;">События бывают следующих типов: </p><ul>
      <li><span style="font-family: monospace;">RequestReceived </span>– на бэкенд поступил новый запрос (поле <span style="font-family:
      monospace;">data</span> пустое); </li>
      <li><span style="font-family: monospace;">RequestSent </span>– на бэкенд-потомок был отправлен подзапрос (в поле <span style="font-family:
      monospace;">data </span>записывается имя бэкенда-потомка); </li>
      <li><span style="font-family: monospace;">ResponseSent </span>– бэкенд отправил ответ родителю (<span style="font-family:
      monospace;">data </span>пустое); </li>
      <li><span style="font-family: monospace;">ResponseReceived </span>– бэкенд получил ответ от потомка (в поле <span style="font-family:
      monospace;">data</span> записываются имя бэкенда-потомка и статус – <span style="font-family: monospace;">OK </span>или <span
      style="font-family: monospace;">ERROR </span>–, разделенные символом табуляции).</li>
      </ul>
      <!--l. 66-->
      <p style="text-indent: 0em;">Все события собираются в одну таблицу. Очевидно, что на каждом бэкенде имеются сетевые издержки
      на пересылку запросов и ответов. Для одного запроса в корневой бэкенд считаем, что на них тратится сумма разниц <span style="font-family:
      monospace;">datetime</span> между всеми соответствующими парами событий <span style="font-family: monospace;">RequestSent</span>/<span
      style="font-family: monospace;">RequestReceived</span> и <span style="font-family: monospace;">ResponseSent</span>/<span style="font-family:
      monospace;">ResponseReceived</span>, которые возникли при обработке запроса. Вам нужно посчитать эту величину, усредненную
      по запросам в корневой бэкенд. </p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> Используется БД postgresql 10.6.1 x64. <!--l. 71-->
      <p style="text-indent: 0em;">Система перед проверкой создает таблицу с событиями следующим запросом: </p><div style="clear:
      both; font-family: monospace; text-align: left; white-space: nowrap;"> CREATE&nbsp;TABLE&nbsp;requests&nbsp;( &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;datetime&nbsp;TIMESTAMP,
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;request\_id&nbsp;UUID, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;parent\_request\_id&nbsp;UUID, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;host&nbsp;TEXT,
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;type&nbsp;TEXT, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;data&nbsp;TEXT &nbsp;<br>);</div>
      <!--l. 82-->
      <p style="text-indent: 0em;">
      <!--l. 84-->
      </p><p style="text-indent: 0em;">После таблица заполняется тестовыми данными. </p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> Напишите SELECT выражение, которое вернет таблицу из одной строки с колонкой <span style="font-family: monospace;">avg\_network\_time\_ms
      </span>типа <span style="font-family: monospace;">numeric</span>, в которую будет записана средняя сетевая задержка в миллисекундах.
      <!--l. 89-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Внимание! </span>Текст выражения подставится в систему как подзапрос,
      поэтому завершать выражение точкой с запятой не надо (в противном случае вы получите ошибку <span style="font-family: monospace;">Presentation
      Error</span>). </p>
      
   </div>
   <h2>Примечания</h2>
   <div class="notes"> Для таблицы <span style="font-family: monospace;">requests </span>с таким содержимым (здесь для компактности пишем числа
      вместо UUID’а и миллисекунды в datetime, в проверочной таблице будут UUID’ы и timestamp’ы): <!--tex4ht:inline-->
      <div style="margin-bottom: 0.5em; margin-top: 0.5em; text-align: center;">
      <table cellpadding="0" cellspacing="0" rules="groups" style="border-left: solid black 0.4pt; border-right: solid black 0.4pt;
      margin-left: auto; margin-right: auto;">
      <colgroup>
      <col>
      </colgroup>
      <colgroup>
      <col>
      </colgroup>
      <colgroup>
      <col>
      </colgroup>
      <colgroup>
      <col>
      </colgroup>
      <colgroup>
      <col>
      </colgroup>
      <colgroup>
      <col>
      </colgroup>
      <tbody><tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">datetime</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">request\_id</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">parent\_request\_id</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">host
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">type
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">data
      </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.000
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestReceived
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.100
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.101
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend2.ru
      </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.150
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">1
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestReceived
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.200
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">2
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend2.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestReceived
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.155
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">1
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend3.ru
      </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.210
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">2
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend2.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.200
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">3
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">1
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend3.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestReceived
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.220
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">3
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">1
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend3.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.260
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">1
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseReceived</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend3.ru
      OK </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.300
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">1
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.310
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseReceived</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      OK </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.250
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseReceived</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend2.ru
      OK </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.400
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">0
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.500
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">4
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestReceived
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.505
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">4
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.510
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">5
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">4
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">RequestReceived
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.700
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">5
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">4
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.710
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">4
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseReceived</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">backend1.ru
      ERROR</span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">.715
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">4
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">NULL
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">balancer.test.yandex.ru</span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">ResponseSent
      </span></td>
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;">
      </td>
      </tr>
      </tbody></table>
      </div>
      <!--l. 117-->
      <p style="text-indent: 0em;">запрос участника должен возвращать следующий результат: <!--tex4ht:inline-->
      </p><div style="margin-bottom: 0.5em; margin-top: 0.5em; text-align: center;">
      <table cellpadding="0" cellspacing="0" style="margin-left: auto; margin-right: auto;">
      <colgroup>
      <col>
      </colgroup>
      <tbody><tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-weight: bold;">avg\_network\_time\_ms</span></td>
      </tr>
      <tr style="vertical-align: baseline;">
      <td style="padding-left: 5pt; padding-right: 5pt; text-align: left; white-space: nowrap;"><span style="font-family: monospace;">149.5
      </span></td>
      </tr>
      </tbody></table>
      </div>
      <!--l. 123-->
      <p style="text-indent: 0em;">Тут два корневых запроса. Выпишем времена, которые прошли между отправкой запроса/ответа и его
      получением. </p><ol style="list-style-type: decimal;">
      <li>Запрос с id <!--l. 125--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math><ul>
      <li><span style="font-family: monospace;">balancer.test.yandex.ru -&gt; backend1.ru </span>– <!--l. 127--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn><mn>0</mn></math> мс (от <!--l. 127--><math
      display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>1</mn><mn>0</mn><mn>0</mn></math>
      до <!--l. 127--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>1</mn><mn>5</mn><mn>0</mn></math>)
      </li>
      <li><span style="font-family: monospace;">balancer.test.yandex.ru -&gt; backend2.ru </span>– <!--l. 128--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>9</mn><mn>9</mn></math> мс (от <!--l. 128--><math
      display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>1</mn><mn>0</mn><mn>1</mn></math>
      до <!--l. 128--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>2</mn><mn>0</mn><mn>0</mn></math>)
      </li>
      <li><span style="font-family: monospace;">backend1.ru -&gt; backend3.ru </span>– <!--l. 129--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn><mn>5</mn></math> мс (от <!--l. 129--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>1</mn><mn>5</mn><mn>5</mn></math> до <!--l. 129--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>2</mn><mn>0</mn><mn>0</mn></math>) </li>
      <li><span style="font-family: monospace;">backend2.ru -&gt; balancer.test.yandex.ru </span>– <!--l. 130--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn><mn>0</mn></math> мс (от <!--l. 130--><math
      display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>2</mn><mn>1</mn><mn>0</mn></math>
      до <!--l. 130--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>2</mn><mn>5</mn><mn>0</mn></math>)
      </li>
      <li><span style="font-family: monospace;">backend3.ru -&gt; backend1.ru </span>– <!--l. 131--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn><mn>0</mn></math> мс (от <!--l. 131--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>2</mn><mn>2</mn><mn>0</mn></math> до <!--l. 131--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>2</mn><mn>6</mn><mn>0</mn></math>) </li>
      <li><span style="font-family: monospace;">backend1.ru -&gt; balancer.test.yandex.ru </span>– <!--l. 132--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mn>0</mn></math> мс (от <!--l. 132--><math
      display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>3</mn><mn>0</mn><mn>0</mn></math>
      до <!--l. 132--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>3</mn><mn>1</mn><mn>0</mn></math>)</li>
      </ul>
      <!--l. 134-->
      <p style="margin-bottom: 0.5em; text-indent: 0em;">Суммарно это <!--l. 134--><math display="inline" style="text-indent: 0em;"
      xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn><mn>0</mn> <mo>+</mo> <mn>9</mn><mn>9</mn> <mo>+</mo> <mn>4</mn><mn>5</mn>
      <mo>+</mo> <mn>4</mn><mn>0</mn> <mo>+</mo> <mn>4</mn><mn>0</mn> <mo>+</mo> <mn>1</mn><mn>0</mn> <mo>=</mo> <mn>2</mn><mn>8</mn><mn>4</mn></math>
      мс </p>
      </li>
      <li>Запрос с id <!--l. 135--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn></math><ul>
      <li><span style="font-family: monospace;">balancer.test.yandex.ru -&gt; backend1.ru </span>– <!--l. 137--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn></math> мс (от <!--l. 137--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>5</mn><mn>0</mn><mn>5</mn></math> до <!--l.
      137--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>5</mn><mn>1</mn><mn>0</mn></math>)
      </li>
      <li><span style="font-family: monospace;">backend1.ru -&gt; balancer.test.yandex.ru </span>– <!--l. 138--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mn>0</mn></math> мс (от <!--l. 138--><math
      display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>7</mn><mn>0</mn><mn>0</mn></math>
      до <!--l. 138--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>.</mo><mn>7</mn><mn>1</mn><mn>0</mn></math>)</li>
      </ul>
      <!--l. 140-->
      <p style="margin-bottom: 0.5em; text-indent: 0em;">Суммарно это <!--l. 140--><math display="inline" style="text-indent: 0em;"
      xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn> <mo>+</mo> <mn>1</mn><mn>0</mn> <mo>=</mo> <mn>1</mn><mn>5</mn></math>
      мс</p>
      </li>
      </ol>
      <!--l. 142-->
      <p style="text-indent: 0em;">Итого, ответ <!--l. 142--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>2</mn><mn>8</mn><mn>4</mn>
      <mo>+</mo> <mn>1</mn><mn>5</mn></mrow><mo>)</mo></mrow><mo>∕</mo><mn>2</mn> <mo>=</mo> <mn>1</mn><mn>4</mn><mn>9</mn><mo>.</mo><mn>5</mn></math>.
      </p>
      <p></p>
      <p></p>
      
   </div>
</div></div>


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-C">C. Система счисления</h1>
      <table>
         <tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>2&nbsp;секунды</td>
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
   <div class="legend"> Программист Марат совсем недавно начал изучать информатику в Яндекс Учебнике. Его настолько увлекла тема «Системы счисления»,
      что он всю ночь решал примеры на сложение и вычитание чисел в различных системах счисления. Однако когда на следующий день
      он снова открыл свои записи, он заметил, что многие записанные им равенства неверны в тех системах счисления, которые были
      даны в примерах из учебника. «Интересно, а есть ли в принципе какая-то система счисления, в которой это равенство оказалось
      бы верным?»&nbsp;— огорчённо спрашивал себя Марат, глядя в свою тетрадь с примерами. «А если есть, то какое минимальное у
      неё может быть основание?»&nbsp;— задумался он. <!--l. 49-->
      <p style="text-indent: 0em;">Помогите Марату ответить на эти вопросы. Для заданного равенства найдите минимальное основание
      системы счисления, в которой равенство будет верным, или укажите, что такой системы счисления нет. </p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> В единственной строке <!--l. 52--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>
      задано арифметическое выражение, систему счисления которого необходимо определить (<!--l. 52--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo>|</mo><mi>s</mi><mo>|</mo> <mo>&lt;</mo><mo>=</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn><mn>0</mn></math>).
      <!--l. 54-->
      <p style="text-indent: 0em;">Строка <!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>
      состоит из цифр <!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math>–<!--l.
      54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>9</mn></math>, букв латинского
      алфавита в верхнем регистре <!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math>–<!--l.
      54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>Z</mi></math>, пробелов
      и символов <span style="font-family: monospace;">+</span>, <span style="font-family: monospace;">-</span>, <span style="font-family:
      monospace;">=</span>. Пробелы опциональны и не несут смысла, они могут отделять арифметические знаки от чисел. <!--l. 56-->
      </p><p style="text-indent: 0em;">Гарантируется, что <!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>
      представляет собой синтаксически корректное выражение, в котором есть ровно один знак <span style="font-family: monospace;">=
      </span>и отсутствуют унарные плюсы и минусы. </p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> Выведите минимальное основание <!--l. 59--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math>
      (<!--l. 59--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi> <mo>≥</mo>
      <mn>2</mn></math>) системы счисления, в которой выражение обращается в верное равенство. Если такого <!--l. 60--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math> нет, выведите <!--l. 60--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mo>−</mo> <mn>1</mn></math>. 
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
            <td><pre>2 + 2 = 11 - 1
</pre></td>
            <td><pre>4
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
            <td><pre>1 = 1
</pre></td>
            <td><pre>2
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 3</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>2 = 3
</pre></td>
            <td><pre>-1
</pre></td>
         </tr>
      </tbody>
   </table>
   <h3>Пример 4</h3>
   <table class="sample-tests">
      <thead>
         <tr>
            <th>Ввод</th>
            <th>Вывод</th>
         </tr>
      </thead>
      <tbody>
         <tr>
            <td><pre>B = A + 1
</pre></td>
            <td><pre>12
</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes"> В первом примере минимальная система, в которой выражение имеет смысл — троичная, но слева <!--l. 63--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn> <mo>+</mo> <mn>2</mn> <mo>=</mo> <mn>1</mn><mn>1</mn></math>,
      а справа <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mn>1</mn>
      <mo>−</mo> <mn>1</mn> <mo>=</mo> <mn>1</mn><mn>0</mn></math> и выражение не обращается в верное равенство. В четверичной же
      <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn> <mo>+</mo>
      <mn>2</mn> <mo>=</mo> <mn>1</mn><mn>0</mn></math> и выражение обращается в верное равенство. Во втором примере выражение обращается
      в верное равенство во всех системах, начиная с двоичной, поэтому ответ <!--l. 64--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn></math>. В третьем примере невозможно найти системы счисления,
      в которой бы <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn>
      <mo>=</mo> <mn>3</mn></math>, поэтому ответ <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML">
      <mo>−</mo> <mn>1</mn></math>. В четвёртом примере минимальная система, в которой выражение имеет смысл — двенадцатеричная,
      в ней же выражение обращается в верное равенство. 
   </div>
</div>
<a class="link" href="doc/Qualification-C.pdf">Скачать условие задачи</a></div>


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-E">E. Иван и opensource</h1>
      <table>
         <tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>5&nbsp;секунд</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>512Mb</td>
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
   <div class="legend"> В ходе решения рабочей задачи программист Иван написал библиотеку, которая показалась ему полезной и для сообщества. Обсудив
      детали с руководителем и получив согласие, он решил выложить её в opensource. Но рабочий репозиторий содержит файлы, описывающие
      внутреннюю кухню, а их, как известно, нельзя выкладывать за пределы монорепозитория компании. <!--l. 51-->
      <p style="text-indent: 0em;">Иван убедился, что на работу библиотеки эти файлы никак не влияют. Поэтому Иван решил автоматически
      удалить их из библиотеки. У него есть список файлов, относящихся к библиотеке, а также чёрный список, содержащий пути ко внутренним
      файлам репозитория. Далее Иван собирается удалить все файлы библиотеки, которые находятся в директориях из чёрного списка.
      <!--l. 53-->
      </p><p style="text-indent: 0em;">Вам же необходимо написать программу, которая соберёт статистику по удалённым файлам из директорий.
      </p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> В первой строке входных данных записано целое число <!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
      (<!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>n</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>). <!--l. 58-->
      <p style="text-indent: 0em;">В следующих <!--l. 58--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
      строках указаны директории из чёрного списка (могут повторяться). Директорией является или строка <span style="font-family:
      monospace;">/</span>, или строка вида <span style="font-family: monospace;">&lt;dir&gt;&lt;folder&gt;/</span>, где <span style="font-family:
      monospace;">&lt;dir&gt;</span>&nbsp;— это строка, также являющаяся директорией, а <span style="font-family: monospace;">&lt;folder&gt;</span>&nbsp;—
      это непустая строка из строчных латинских букв, цифр или символа <span style="font-family: monospace;">\_</span>. Например,
      <span style="font-family: monospace;">/</span>, <span style="font-family: monospace;">/abcd/</span>, <span style="font-family:
      monospace;">/\_0kda/sasw/</span>&nbsp;— корректные директории, а <span style="font-family: monospace;">/asds</span>, <span
      style="font-family: monospace;">/sds/v.c</span>, <span style="font-family: monospace;">/asd//ds/</span>&nbsp;— некорректные
      директории. <!--l. 60-->
      </p><p style="text-indent: 0em;">Затем записано целое число <!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
      (<!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>m</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>). <!--l. 62-->
      </p><p style="text-indent: 0em;">В следующих <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
      строках указаны пути к файлам библиотеки без повторений. Путь к файлу имеет вид <span style="font-family: monospace;">&lt;dir&gt;&lt;fullName&gt;</span>,
      где <span style="font-family: monospace;">&lt;fullName&gt; </span>является конкатенацией непустых строк <span style="font-family:
      monospace;">&lt;name&gt; </span>и <span style="font-family: monospace;">&lt;ext&gt;</span>. Строка <span style="font-family:
      monospace;">&lt;name&gt; </span>состоит из строчных латинских букв, цифр и символа <span style="font-family: monospace;">\_</span>.
      Строка <span style="font-family: monospace;">&lt;ext&gt; </span>начинается с точки, после которой следуют <!--l. 62--><math
      display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math> строчных латинских
      букв <!--l. 62--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mrow><mo>(</mo><mrow><mn>1</mn>
      <mo>≤</mo> <mi>c</mi> <mo>≤</mo> <mn>3</mn></mrow><mo>)</mo></mrow></math>. Например, <span style="font-family: monospace;">/asd/d.txt</span>,
      <span style="font-family: monospace;">/a.q</span>, <span style="font-family: monospace;">/a/b/c/d.efg</span>&nbsp;— корректные
      пути к файлам, а <span style="font-family: monospace;">/asd/d</span>, <span style="font-family: monospace;">/a/b/c.d.e</span>&nbsp;—
      некорректные пути к файлам. <!--l. 64-->
      </p><p style="text-indent: 0em;">Далее записано целое число <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math>
      (<!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>q</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>)&nbsp;— количество
      запросов. <!--l. 66-->
      </p><p style="text-indent: 0em;">В следующих <!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math>
      строках указаны директории (могут повторяться), на каждую из которых необходимо в дальнейшем собрать статистику. <!--l. 68-->
      </p><p style="text-indent: 0em;">Суммарно в тестовых данных не более <!--l. 68--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>
      символов. </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> Для каждого запроса сначала выведите целое число&nbsp;— количество различных расширений файлов, удалённых по этому запросу.
      Затем для каждого расширения <span style="font-family: monospace;">&lt;ext&gt; </span>укажите количество <span style="font-family:
      monospace;">&lt;count&gt; </span>удалённых файлов данного расширения в формате <span style="font-family: monospace;">&lt;ext&gt;:</span><span
      style="font-family: monospace;">&nbsp;&lt;count&gt;</span>. 
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
            <td><pre>2
/project/internal/
/project/docs/
5
/project/docs/internal.md
/project/lib/header.cpp
/project/lib/header.h
/project/bin/main.cpp
/project/internal/secret.h
3
/
/project/internal/
/project/lib/
</pre></td>
            <td><pre>2
.md: 1
.h: 1
1
.h: 1
0
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
            <td><pre>2
/lib/folder\_1/
/lib/folder\_2/folder\_3/
7
/lib/a.cpp
/lib/folder\_2/b.cpp
/lib/folder\_1/c.cpp
/lib/folder\_2/folder\_4/d.cpp
/lib/folder\_1/folder\_5/e.cpp
/lib/folder\_2/folder\_3/folder\_6/f.py
/lib/folder\_2/folder\_3/g.cpp
3
/lib/
/lib/folder\_1/
/lib/folder\_2/
</pre></td>
            <td><pre>2
.cpp: 3
.py: 1
1
.cpp: 2
2
.py: 1
.cpp: 1
</pre></td>
         </tr>
      </tbody>
   </table>
</div></div>


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-F">F. Восстановление пользователей.</h1>
      <table>
         <tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>10&nbsp;секунд</td>
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
   <div class="legend"> Как-то раз ребятам потребовалась хеш функция которая умеет превращать одну последовательность из нулей и единиц в другую
      такой же длины. В качестве решения был предложен следующий алгоритм. <ol style="list-style-type: decimal;">
      <li>Введем следующее правило преобразования тройки бит. Пусть a, b и c это последовательно стоящие биты в числе. Тогда тройка
      abc заменяется тройкой adc в которой d вычисляются как <!--l. 49--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi>
      <mo>=</mo> <mi>a</mi><mo style="margin-left: 0.3em;">⊕</mo><!--nolimits--><mi>b</mi><mo style="margin-left: 0.3em;">⊕</mo><!--nolimits--><mi>c</mi></math>,
      где <!--l. 49--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mo> ⊕</mo><!--nolimits--></math>
      - операция <a href="https://clck.ru/SpQ4k"><span style="font-family: monospace;">https://clck.ru/SpQ4k</span></a>. </li>
      <li>Скажем что мы применили правило в позиции <!--l. 51--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi>
      <mo>+</mo> <mn>1</mn></math>, если мы применили его к тройке бит, которая начинается в позиции <!--l. 51--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math>. Самая левая позиция имеет номер 1.
      </li>
      <li>Последовательно применим это правило <!--l. 52--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math>
      раз в некоторых позициях исходной строки.</li>
      </ol>
      <!--l. 55-->
      <p style="text-indent: 0em;">Например, строку 0010 можно хешировать следующим образом. Применим правило 3 раза в позициях
      2, 3 и 2: </p><ol style="list-style-type: decimal;">
      <li>
      <!--l. 57--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mn>0</mn><mn>1</mn><mn>0</mn>
      <mo>→</mo> <mn>0</mn><mn>1</mn><mn>1</mn><mn>0</mn></math></li>
      <li>
      <!--l. 58--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mn>1</mn><mn>1</mn><mn>0</mn>
      <mo>→</mo> <mn>0</mn><mn>1</mn><mn>0</mn><mn>0</mn></math></li>
      <li>
      <!--l. 59--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn><mn>1</mn><mn>0</mn><mn>0</mn>
      <mo>→</mo> <mn>0</mn><mn>1</mn><mn>0</mn><mn>0</mn></math></li>
      </ol>
      <!--l. 62-->
      <p style="text-indent: 0em;">Таким образом хешом строки 0010 будет строка 0100 <!--l. 64-->
      </p><p style="text-indent: 0em;">При помощи этого алгоритма были вычислены хеши некоторого количества строк. Исходные строки
      и параметры хеширования были утеряны. Но осталось известно количество нулей и единиц в исходных строках и количество применений
      правила преобразования бит. Необходимо восстановить исходные строки и параметры хеширования. </p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> На вход подается файл. Первая строка файла содержит четыре числа разделенных пробелом (<!--l. 67--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>, <!--l. 67--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math>, <!--l. 67--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math>, <!--l. 67--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math>). <!--l. 67--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math> &nbsp;— общее количество хешей в файле,
      <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math>
      &nbsp;— количество нулей в исходных строках, <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math>
      &nbsp;— количество единиц в исходных строках и <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math>
      &nbsp;— количество применений правила хеширования для каждой строки (<!--l. 67--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>n</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn><mo>,</mo><mn>1</mn>
      <mo>≤</mo> <mi>a</mi><mo>,</mo><mi>b</mi><mo>,</mo><mi>c</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn></math>).
      Следующие <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
      строк содержат хеши исходных последовательностей, каждую из которых вам необходимо расшифровать. 
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> В качестве результата нужно вернуть файл, где для каждого из хешей будет расшифровка. Расшифровка представляет собой возможную
      исходную последовательность и список из <!--l. 71--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math>
      позиций, в которых было применено правило хеширования для данной строки. Элементы выходной строки разделяются пробелом. Допускается
      восстановить только часть исходных последовательностей (для невосстановленных хешей требуется вывести <!--l. 71--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mo>−</mo> <mn>1</mn></math>). Балл за задачу тем выше,
      чем больше исходных последовательностей вы сможете восстановить. <!--l. 74-->
      <p style="text-indent: 0em;"><span style="font-weight: bold;">Максимальный балл за задачу составляет 102 балла. </span></p>
      
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
            <td><pre>2 1 3 1
1001
1011
</pre></td>
            <td><pre>1101
2 
1011
2 
</pre></td>
         </tr>
      </tbody>
   </table>
</div>
<a class="link" href="doc/Qualification-F.pdf">Скачать условие задачи</a></div>


<hr>

   <div class="header">
      <h1 class="title" id="Qualification-G">G. Сервис подписки</h1>
      <table>
         <tr class="time-limit">
            <td class="property-title">Ограничение времени</td>
            <td>5&nbsp;секунд</td>
         </tr>
         <tr class="memory-limit">
            <td class="property-title">Ограничение памяти</td>
            <td>512Mb</td>
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
   <div class="legend"> В Яндекс Маркете разрабатывают новый сервис для хранения информации про товарные предложения. В MVP планируется поддержать
      две основные механики: обработка запросов на частичное обновление товарных предложений в базе и отправка обновленных данных
      сервисам-подписчикам. <!--l. 49-->
      <p style="text-indent: 0em;">Товарное предложение в базе описывается следующей JSON схемой: </p><div style="clear: both; font-family:
      monospace; text-align: left; white-space: nowrap;"> { &nbsp;<br>&nbsp;&nbsp;"$id":&nbsp;"offer.schema.json", &nbsp;<br>&nbsp;&nbsp;"type":&nbsp;"object",
      &nbsp;<br>&nbsp;&nbsp;"properties":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"id":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"string",
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"description":&nbsp;"Offer&nbsp;identifier,&nbsp;only&nbsp;alphabetical&nbsp;symbols&nbsp;are&nbsp;allowed"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"price":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"integer",
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"description":&nbsp;"Offer&nbsp;price,&nbsp;value&nbsp;in&nbsp;range&nbsp;from&nbsp;0&nbsp;to&nbsp;10̂9"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"stock\_count":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"integer",
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"description":&nbsp;"Items&nbsp;left&nbsp;on&nbsp;stocks,&nbsp;value&nbsp;in&nbsp;range&nbsp;from&nbsp;0&nbsp;to&nbsp;10̂9"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"partner\_content":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"object",
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"properties":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"title":&nbsp;{
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"string", &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"description":&nbsp;"Offer&nbsp;title&nbsp;filled&nbsp;in&nbsp;by&nbsp;the&nbsp;partner"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"description":&nbsp;{
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"string", &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"description":&nbsp;"Offer&nbsp;description&nbsp;filled&nbsp;in&nbsp;by&nbsp;the&nbsp;partner"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;} &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;}
      &nbsp;<br>&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;"required":&nbsp;[ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"id" &nbsp;<br>&nbsp;&nbsp;]
      &nbsp;<br>}</div>
      <!--l. 85-->
      <p style="text-indent: 0em;">
      <!--l. 87-->
      </p><p style="text-indent: 0em;">При межсервисном взаимодействии к товарному предложению добавляется контекст, который содержит
      идентификатор для сквозной трассировки, его схема: </p><div style="clear: both; font-family: monospace; text-align: left;
      white-space: nowrap;"> { &nbsp;<br>&nbsp;&nbsp;"$id":&nbsp;"message.schema.json", &nbsp;<br>&nbsp;&nbsp;"type":&nbsp;"object",
      &nbsp;<br>&nbsp;&nbsp;"properties":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"trace\_id":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"type":&nbsp;"string"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"offer":&nbsp;{ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"$ref":&nbsp;"offer.schema.json"
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;} &nbsp;<br>&nbsp;&nbsp;}, &nbsp;<br>&nbsp;&nbsp;"required":&nbsp;[ &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"trace\_id",
      &nbsp;<br>&nbsp;&nbsp;&nbsp;&nbsp;"offer" &nbsp;<br>&nbsp;&nbsp;] &nbsp;<br>}</div>
      <!--l. 105-->
      <p style="text-indent: 0em;">
      <!--l. 107-->
      </p><p style="text-indent: 0em;">Сервис, который отправляет запрос на обновление товарного предложения, обязательно заполняет
      идентификатор оффера (поле <!--l. 107--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>o</mi><mi>f</mi><mi>f</mi><mi>e</mi><mi>r</mi><mo>.</mo><mi>i</mi><mi>d</mi></math>)
      и идентификатор для трассировки (поле <!--l. 107--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi><mi>r</mi><mi>a</mi><mi>c</mi><mi>e</mi><mstyle><mtext>\_</mtext></mstyle><mi>i</mi><mi>d</mi></math>).
      Все остальные поля в запросе опциональны. В таком случае при применении обновления будет происходить слияние полей. Например,
      в базе у оффера заполнены поля <!--l. 107--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>r</mi><mi>i</mi><mi>c</mi><mi>e</mi>
      <mo>=</mo> <mn>9</mn><mn>9</mn><mn>9</mn><mn>0</mn></math>, и приходит обновление <!--l. 107--><math display="inline" style="text-indent:
      0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi><mi>t</mi><mi>o</mi><mi>c</mi><mi>k</mi><mstyle><mtext>\_</mtext></mstyle><mi>c</mi><mi>o</mi><mi>u</mi><mi>n</mi><mi>t</mi>
      <mo>=</mo> <mn>1</mn><mn>0</mn><mn>0</mn></math>, тогда в базе будут сохранены оба поля <!--l. 107--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>r</mi><mi>i</mi><mi>c</mi><mi>e</mi> <mo>=</mo>
      <mn>9</mn><mn>9</mn><mn>9</mn><mn>0</mn><mo>;</mo><mi>s</mi><mi>t</mi><mi>o</mi><mi>c</mi><mi>k</mi><mstyle><mtext>\_</mtext></mstyle><mi>c</mi><mi>o</mi><mi>u</mi><mi>n</mi><mi>t</mi>
      <mo>=</mo> <mn>1</mn><mn>0</mn><mn>0</mn></math>. Гарантируется, что все входящие запросы валидны и соответствуют схеме. Так
      как это прототип, удаление товаров из базы и очищение полей было решено не поддерживать. <!--l. 109-->
      </p><p style="text-indent: 0em;">Помимо хранения товарных предложений в базе, в сервисе необходима функция доставки обновлений
      в сервисы-подписчиков. Одна подписка включает в себя два набора полей: trigger и shipment, не обязательно листовых. Когда
      изменяется любое trigger поле <span style="font-weight: bold;">или </span>поле, вложенное в trigger поле, подписчику отправляется
      сообщение. В сообщении находятся все shipment и trigger поля этого подписчика, а также идентификаторы оффера и трассировки
      из запроса, который привел к этому сообщению. Инициализация поля также считается за его изменении и создает сообщение об обновлении.
      </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
   <h2>Формат ввода</h2>
   <div class="input-specification"> Первая строка входных данных содержит два целых числа <!--l. 112--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
      и <!--l. 112--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
      (<!--l. 112--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
      <mi>n</mi> <mo>≤</mo> <mn>5</mn><mn>0</mn><mo>,</mo><mn>1</mn> <mo>≤</mo> <mi>m</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mo>,</mo><mn>0</mn><mn>0</mn><mn>0</mn></math>)
      — количество сервисов подписчиков и количество запросов на обновления. <!--l. 114-->
      <p style="text-indent: 0em;">Следующие <!--l. 114--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
      строк содержат описания сервисов подписчиков: <!--l. 114--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-я
      строка содержит описание <!--l. 114--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-го
      подписчика. В начале строки задается <!--l. 114--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
      и <!--l. 114--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
      — количество trigger и shipment полей соответственно. Далее <!--l. 114--><math display="inline" style="text-indent: 0em;"
      xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math> trigger полей,
      и <!--l. 114--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
      shipment полей. <!--l. 116-->
      </p><p style="text-indent: 0em;">Следующие <!--l. 116--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
      строк содержат запросы на обновление, каждая строка — это валидный json, удовлетворяющий схеме <!--l. 116--><math display="inline"
      style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi><mi>e</mi><mi>s</mi><mi>s</mi><mi>a</mi><mi>g</mi><mi>e</mi><mo>.</mo><mi>s</mi><mi>c</mi><mi>h</mi><mi>e</mi><mi>m</mi><mi>a</mi><mo>.</mo><mi>j</mi><mi>s</mi><mi>o</mi><mi>n</mi></math>.
      </p>
      <p></p>
      
   </div>
   <h2>Формат вывода</h2>
   <div class="output-specification"> На каждое событие обновления выведите <!--l. 119--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>k</mi></mrow><mrow><mi>j</mi></mrow></msub></math>
      сообщений в формате <!--l. 119--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi><mi>e</mi><mi>s</mi><mi>s</mi><mi>a</mi><mi>g</mi><mi>e</mi><mo>.</mo><mi>s</mi><mi>c</mi><mi>h</mi><mi>e</mi><mi>m</mi><mi>a</mi><mo>.</mo><mi>j</mi><mi>s</mi><mi>o</mi><mi>n</mi></math>,
      где <!--l. 119--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>k</mi></mrow><mrow><mi>j</mi></mrow></msub></math>
      — это количество сервисов-подписчиков, которым данное событие интересно. Сообщения должны идти в том же порядке, что и обновления,
      которые привели к ним. Сообщения в рамках одного обновления должны быть отсортированы по порядковому номеру подписчика. 
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
            <td><pre>2 5
2 0 price stock\_count
1 0 partner\_content
{"trace\_id": "1", "offer": {"id": "1", "price": 9990}}
{"trace\_id": "2", "offer": {"id": "1", "stock\_count": 100}}
{"trace\_id": "3", "offer": {"id": "2", "partner\_content": {"title": "Backpack"}}}
{"trace\_id": "4", "offer": {"id": "1", "stock\_count": 100}}
{"trace\_id": "5", "offer": {"id": "2", "partner\_content": {"description": "Best backpack ever"}}}
</pre></td>
            <td><pre>{"trace\_id":"1","offer":{"id":"1","price":9990}}
{"trace\_id":"2","offer":{"id":"1","price":9990,"stock\_count":100}}
{"trace\_id":"3","offer":{"id":"2","partner\_content":{"title":"Backpack"}}}
{"trace\_id":"5","offer":{"id":"2","partner\_content":{"description":"Best backpack ever","title":"Backpack"}}}
</pre></td>
         </tr>
      </tbody>
   </table>
   <h2>Примечания</h2>
   <div class="notes"> Для решений на языке <span style="font-weight: bold;">Python </span>доступны библиотеки json, requests и urllib. <!--l. 124-->
      <p style="text-indent: 0em;">Для решений на языке <span style="font-weight: bold;">Java </span>доступны библиотеки <span style="font-weight:
      bold;">jackson-core:2.13.1</span>, <span style="font-weight: bold;">jackson-annotations:2.13.1 </span>и <span style="font-weight:
      bold;">jackson-databind:2.13.1 </span>. Соответствующие функции импорта могут иметь вид: </p><div style="clear: both; font-family:
      monospace; text-align: left; white-space: nowrap;"> import&nbsp;com.fasterxml.jackson.databind.JsonNode; &nbsp;<br>import&nbsp;com.fasterxml.jackson.databind.ObjectMapper;
      &nbsp;<br>import&nbsp;com.fasterxml.jackson.core.JsonProcessingException;</div>
      <!--l. 130-->
      <p style="text-indent: 0em;">
      <!--l. 132-->
      </p><p style="text-indent: 0em;">Для решений на языке <span style="font-weight: bold;">C++ </span>доступна библиотека <a href="https://github.com/nlohmann/json/releases/tag/v3.8.0">nlohmann/json</a>
      v3.8.0. Соответствующая директива include выглядит так: </p><div style="clear: both; font-family: monospace; text-align: left;
      white-space: nowrap;"> #include&nbsp;"json.hpp"</div>
      <!--l. 135-->
      <p style="text-indent: 0em;">
      <!--l. 137-->
      </p><p style="text-indent: 0em;">Для решений на языке <span style="font-weight: bold;">Golang </span>доступны все стандартные
      пакеты, включая encoding/json, net/http, sort и другие. <!--l. 139-->
      </p><p style="text-indent: 0em;">Для решений на <span style="font-weight: bold;">C# </span>доступны библиотеки System.Text.Json
      и Newtonsoft.Json. Соответствующие using могут выглядеть так: </p><div style="clear: both; font-family: monospace; text-align:
      left; white-space: nowrap;"> using&nbsp;Newtonsoft.Json; &nbsp;<br>using&nbsp;System.Text.Json;</div>
      <!--l. 143-->
      <p style="text-indent: 0em;">
      </p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      <p></p>
      
   </div>
</div>
<a class="link" href="doc/Qualification-G.pdf">Скачать условие задачи</a></div>


<hr>

