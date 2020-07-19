
SELECT concat(directors.director_first_name,directors.director_last_name) as director_name, movies.movie_title
FROM directors 
JOIN movies_directors on movies_directors.director_id = directors.director_id
join movies on movies.movie_id=movies_directors.movie_id 
join movies_cast on movies_cast.movie_id=movies.movie_id
and movies_cast.role='SeanMaguire';