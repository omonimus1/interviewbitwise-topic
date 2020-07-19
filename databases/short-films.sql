
select movie_title,
movie_year,
CONCAT(directors.director_first_name, directors.director_last_name) as director_name,
CONCAT(actors.actor_first_name,  actors.actor_last_name) as actor_name,
role 
from directors
join movies_directors on movies_directors.director_id = directors.director_id
join movies on movies.movie_id = movies_directors.movie_id
join movies_cast on movies_cast.movie_id = movies.movie_id
join actors on actors.actor_id = movies_cast.actor_id
where movie_time = (select min(movie_time) from movies);