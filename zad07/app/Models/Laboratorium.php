<?php

namespace Scheduler\Models;

class Laboratorium extends SemesterClass {

	public function getFormName(): string {
		return "Laboratorium";
	}
	public function getColor(): string {
		return "blue";
	}

}
