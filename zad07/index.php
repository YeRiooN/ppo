<?php

require "./vendor/autoload.php";

$color="red";

use Scheduler\Models\Lecture;
use Scheduler\Models\Schedule;
use Scheduler\Models\Event;
use Scheduler\Models\SemestrClass;
use Scheduler\Models\Laboratorium;
use Scheduler\Models\Exercises;


$twig = new Twig_Environment(new Twig_Loader_Filesystem("/"), []);

$schedule = new Schedule();


$schedule->save(new Lecture("Bazy danych","C212","dr Aleksander Klosow"), 1, 1);
$schedule->save(new Lecture("Projektowanie i programowanie obiektowe","C212","dr Aleksander Klosow"), 1, 2);
$schedule->save(new Lecture("Sieci Komputerowe","C212","mgr inż. Piotr Nadybski"), 1, 4);
$schedule->save(new Lecture("Podstawy metod probabilistycznych i statystyki","C212","dr Karol Selwat"), 3,1);
$schedule->save(new Lecture("Architektura Komputerów","C125","dr hab. inż. Wojciech Kordecki"), 4, 5);

$schedule->save(new Exercises("Język Angielski","C312","mgr Magdalena Kendziorczyk-Twardoch"), 1, 3);
$schedule->save(new Exercises("Podstawy metod probabilistycznych i statystyki","C222","dr Karol Selwat"), 3, 2);

$schedule->save(new Laboratorium("Sieci Komputerowe","C11","mgr inż. Piotr Nadybski"), 1, 5);
$schedule->save(new Laboratorium("Bazy Danych","A218","mgr inż. Józefa Górska-Zając"), 3, 3);
$schedule->save(new Laboratorium("Architektura Komputerów","D16","mgr inż. Jan Duda"), 3, 5);

$schedule->save(new Event("","",""), 2, 3);

echo $twig->render("index.twig", [
    "schedule" => $schedule,
]);
