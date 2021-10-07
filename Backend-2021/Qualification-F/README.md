<div class="header">
<h1 class="title">F. Музыкальные жанры</h1>
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
<p class="paragraph">Скрипт с примером заполнения базы данных можно скачать по ссылке: <a href="https://disk.yandex.ru/d/kyHTZtzW-63IMQ">https://disk.yandex.ru/d/kyHTZtzW-63IMQ</a></p>
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
<td>Hallowed Be Thy Name</td>
<td>rock</td>
</tr>
<tr>
<td>1</td>
<td>8</td>
<td>Hallowed Be Thy Name</td>
<td>metal</td>
</tr>
<tr>
<td>1</td>
<td>12</td>
<td>Hallowed Be Thy Name</td>
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
