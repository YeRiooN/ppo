<?php

namespace Scheduler\Models;

class Exercises extends SemesterClass {

	public function getFormName(): string {
		return "Ćwiczenia";
	}

	public function getColor(): string {
		return "green";
	}
}
