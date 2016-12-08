<?php 
date_default_timezone_set('America/New_York');
$I = new AcceptanceTester($scenario);
$I->am('user');
$I->wantTo('login to website');
$I->lookForwardTo('access all website features');
$I->amOnPage('/user');
$I->fillField('Username','zeeshan');
$I->fillField('Password','123456');
$I->click('Log in');
$I->see('zeeshan');
