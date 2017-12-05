<?php

namespace Scheduler\Models;

use Scheduler\Interfaces\SemesterClassInterface;

abstract class SemesterClass implements SemesterClassInterface {

	private $name;
	private $room;
	private $master;
	

	public function __construct(string $name, string $room, string $master) {
		$this->name = $name;
		$this->room = $room;
		$this->master = $master;
	
	
		
	}

	
	public function getName(): string {
		return $this->name;
	}
	public function getRoom(): string {
		return $this->room;
	}
	public function getMaster(): string {
		return $this->master;
	}


}
