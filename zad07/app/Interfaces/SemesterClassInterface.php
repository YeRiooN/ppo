<?php

namespace Scheduler\Interfaces;
use Scheduler\Interfaces\SemesterClassInterface;

interface SemesterClassInterface {

	public function getName(): string;
	public function getFormName(): string;
	public function getRoom(): string;
    public function getMaster(): string;
	public function getColor(): string;

}
