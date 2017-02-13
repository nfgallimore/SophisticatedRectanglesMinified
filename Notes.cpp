bool p1Left = false, p2Left = false, p3Left = false, p4Left = false, 
p1Upper = false, p2Upper = false, p3Upper = false, p4Upper = false;

(p1.x > p2.x) ? p2Left = true : p1Left = true;
(p1.x > p3.x) ? p3Left = true : p1Left = true;
(p1.x > p4.x) ? p4Left = true : p1Left = true;

(p2.x > p1.x) ? p2Left = true : p2Left = true;
(p2.x > p3.x) ? p3Left = true : p2Left = true;
(p2.x > p4.x) ? p4Left = true : p2Left = true;

(p3.x > p1.x) ? p1Left = true : p3Left = true;
(p3.x > p2.x) ? p2Left = true : p3Left = true;
(p3.x > p4.x) ? p4Left = true : p3Left = true;

(p4.x > p1.x) ? p1Left = true : p4Left = true;
(p4.x > p2.x) ? p2Left = true : p4Left = true;
(p4.x > p3.x) ? p3Left = true : p4Left = true;

(p1.y > p2.y) ? p2Upper = true : p1Upper = true;
(p1.y > p3.y) ? p3Upper = true : p1Upper = true;
(p1.y > p4.y) ? p4Upper = true : p1Upper = true;

(p2.y > p1.y) ? p2Upper = true : p2Upper = true;
(p2.y > p3.y) ? p3Upper = true : p2Upper = true;
(p2.y > p4.y) ? p4Upper = true : p2Upper = true;

(p3.y > p1.y) ? p1Upper = true : p3Upper = true;
(p3.y > p2.y) ? p2Upper = true : p3Upper = true;
(p3.y > p4.y) ? p4Upper = true : p3Upper = true;

(p4.y > p1.y) ? p1Upper = true : p4Upper = true;
(p4.y > p2.y) ? p2Upper = true : p4Upper = true;
(p4.y > p3.y) ? p3Upper = true : p4Upper = true;			


// beginning p1 assignment
if (p1Upper && p1Left) {
	a1.x = p1.x;
	a1.y = p1.y;
}
else if (!p1Upper && p1Left) {
	a2.x = p1.x;
	a2.y = p1.y;
}
else if (p1Upper && !p1Left) {
	a3.x = p1.x;
	a3.y = p1.x;
}
else if (!p1Upper && !p1Left) {
	a4.x = p1.x;
	a4.y = p1.y;
}

// beginning p2 assignment
if (p2Upper && p2Left) {
	a1.x = p2.x;
	a1.y = p2.y;
}
else if (!p2Upper && p2Left) {
	a2.x = p2.x;
	a2.y = p2.y;
}
else if (p2Upper && !p2Left) {
	a3.x = p2.x;
	a3.y = p2.x;
}
else if (!p2Upper && !p2Left) {
	a3.x = p2.x;
	a3.y = p2.y;
}

// beginning p3 assignment
if (p3Upper && p3Left) {
	a4.x = p3.x;
	upperLeftY = p3.y;
}
else if (!p3Upper && p3Left) {
	lowerLeftX = p3.x;
	lowerLeftY = p3.y;
}
else if (p3Upper && !p3Left) {
	upperRightX = p3.x;
	upperRightY = p3.x;
}
else if (!p3Upper && !p3Left) {
	lowerRightX = p3.x;
	lowerRightY = p3.y;
}

// beginning p4 assignment
if (p4Upper && p4Left) {
	upperLeftX = p4.x;
	upperLeftY = p4.y;
}
else if (!p4Upper && p4Left) {
	lowerLeftX = p4.x;
	lowerLeftY = p4.y;
}
else if (p4Upper && !p4Left) {
	upperRightX = p4.x;
	upperRightY = p4.x;
}
else if (!p4Upper && !p4Left) {
	lowerRightX = p4.x;
	lowerRightY = p4.y;
}







	if (sqrt((a2.x - a1.x) * (a2.x - a1.x) + (a2.y - a1.y) * (a2.y - a1.y)) <)
	double length = sqrt((a2.x - a1.x) * (a2.x - a1.x) + (a2.y - a1.y) * (a2.y - a1.y));
	// if distance between a1 and a3 is greater than distance between a1 and a2
	if (sqrt((a3.x - a1.x) * (a3.x - a1.x) + (a3.y - a1.y) * (a3.y - a1.y)) > hypotenuse) 
		hypotenuse = sqrt((a3.x - a1.x) * (a3.x - a1.x) + (a3.y - a1.y) * (a3.y - a1.y)); 
	// if distance between a1 and a4 is greater than distance between a1 and a2 or a1 and a3
	if (sqrt((a4.x - a1.x) * (a4.x - a1.x) + (a4.y - a1.y) * (a4.y - a1.y)) > hypotenuse) 
		hypotenuse = sqrt((a4.x - a1.x) * (a4.x - a1.x) + (a4.y - a1.y) * (a4.y - a1.y)); 

	// checking difference between all x values
	double length = std::abs(a1.x - a2.x);
	if (a1.x - a3.x > length) length = std::abs(a1.x - a3.x);
	if (a1.x - a4.x > length) length = std::abs(a1.x - a4.x);

	if (a2.x - a1.x > length) length = std::abs(a2.x - a1.x);
	if (a2.x - a3.x > length) length = std::abs(a2.x - a3.x);
	if (a2.x - a4.x > length) length = std::abs(a2.x - a4.x);

	if (a3.x - a1.x > length) length = std::abs(a3.x - a1.x);
	if (a3.x - a2.x > length) length = std::abs(a3.x - a2.x);
	if (a3.x - a4.x > length) length = std::abs(a3.x - a4.x);

	if (a4.x - a1.x > length) length = std::abs(a4.x - a1.x);
	if (a4.x - a2.x > length) length = std::abs(a4.x - a2.x);
	if (a4.x - a3.x > length) length = std::abs(a4.x - a3.x);

	// checking difference between all y values
	if (a1.y - a2.y > length) length = std::abs(a1.y - a2.y);
	if (a1.y - a3.y > length) length = std::abs(a1.y - a3.y);
	if (a1.y - a4.y > length) length = std::abs(a1.y - a4.y);

	if (a2.y - a1.y > length) length = std::abs(a2.y - a1.y);
	if (a2.y - a3.y > length) length = std::abs(a2.y - a3.y);
	if (a2.y - a4.y > length) length = std::abs(a2.y - a4.y);

	if (a3.y - a1.y > length) length = std::abs(a3.y - a1.y);
	if (a3.y - a2.y > length) length = std::abs(a3.y - a2.y);
	if (a3.y - a4.y > length) length = std::abs(a3.y - a4.y);

	if (a4.y - a1.y > length) length = std::abs(a4.y - a1.y);
	if (a4.y - a2.y > length) length = std::abs(a4.y - a2.y);
	if (a4.y - a3.y > length) length = std::abs(a4.y - a3.y);


	
	// checking difference between all x values
	double width = std::abs(a1.x - a2.x);
	if (a1.x - a3.x < width) width = std::abs(a1.x - a3.x);
	if (a1.x - a4.x < width) width = std::abs(a1.x - a4.x);

	if (a2.x - a1.x < width) width = std::abs(a2.x - a1.x);
	if (a2.x - a3.x < width) width = std::abs(a2.x - a3.x);
	if (a2.x - a4.x < width) width = std::abs(a2.x - a4.x);

	if (a3.x - a1.x < width) width = std::abs(a3.x - a1.x);
	if (a3.x - a2.x < width) width = std::abs(a3.x - a2.x);
	if (a3.x - a4.x < width) width = std::abs(a3.x - a4.x);

	if (a4.x - a1.x < width) width = std::abs(a4.x - a1.x);
	if (a4.x - a2.x < width) width = std::abs(a4.x - a2.x);
	if (a4.x - a3.x < width) width = std::abs(a4.x - a3.x);

	// checking difference between all y values
	if (a1.y - a2.y < width) width = std::abs(a1.y - a2.y);
	if (a1.y - a3.y < width) width = std::abs(a1.y - a3.y);
	if (a1.y - a4.y < width) width = std::abs(a1.y - a4.y);

	if (a2.y - a1.y < width) width = std::abs(a2.y - a1.y);
	if (a2.y - a3.y < width) width = std::abs(a2.y - a3.y);
	if (a2.y - a4.y < width) width = std::abs(a2.y - a4.y);

	if (a3.y - a1.y < width) width = std::abs(a3.y - a1.y);
	if (a3.y - a2.y < width) width = std::abs(a3.y - a2.y);
	if (a3.y - a4.y < width) width = std::abs(a3.y - a4.y);

	if (a4.y - a1.y < width) width = std::abs(a4.y - a1.y);
	if (a4.y - a2.y < width) width = std::abs(a4.y - a2.y);
	if (a4.y - a3.y < width) width = std::abs(a4.y - a3.y);
