<?php 
function feedThePet(&$pets, $petId){


    $pets = array_filter($pets, function($id) {

        return $id != $petId;

    });
}

$pets = [1, 2, 3, null, 4, 5];

feedThePet($pets, 1);
feedThePet($pets, 3);
feedThePet($pets, 2);
feedThePet($pets, 4);
feedThePet($pets, 5);

echo count($pets);