#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
start:   cout << "Введите свой текст:\n";
	string a;
	string b;
	string d;
	string g;
	cin >> a;
	cout << "Синий - dark blue, Зеленый - dark green, Голубой - blue, Красный - red, Лиловый - purple, Желтый - yellow, Белый - white, Серый - gray, свело-синий - light dark blue, светло-зеленый - light green, светло-голубой - light blue, светло-красный - light red, светло-желтый - light yellow, ярко-белый - light white\n";
	cout << "Ведите цвет заливки на английском:\n";
	cin >> b;
	if (b == "dark blue" || "Dark blue" || "Dark Blue") {
		d = 1;
	}
	else if (b == "dark green" || "Dark Green" || "Dark green") {
		d = 2;
	}
	else if (b == "blue" || "Blue") {
		d = 3;
	}
	else if (b == "red" || "Red") {
		d = 4;
	}
	else if (b == "purple" || "Purple") {
		d = 5;
	}
	else if (b == "yellow" || "Yellow") {
		d = 6;
	}
	else if (b == "white" || "White") {
		d = 7;
	}
	else if (b == "gray" || "Gray") {
		d = 8;
	}
	else if (b == "light dark blue" || "Light dark blue" || "Light Dark Blue") {
		d = 9;
	}
	else if (b == "light green" || "Light green" || "Light Green") {
		d = "A";
	}
	else if (b == "light blue" || "Light blue" || "Light Blue") {
		d = "B";
	}
	else if (b == "light red" || "Light red" || "Light Red") {
		d = "C";
	}
	else if (b == "light yellow" || "light yellow" || "light yellow") {
		d = "D";
	}
	else if (b == "light white" || "light white" || "light white") {
		d = "E";
	}
	else {
		cout << "Ошибка!\n";
		goto start;
	}
	cout << "Синий - dark blue, Зеленый - dark green, Голубой - blue, Красный - red, Лиловый - purple, Желтый - yellow, Белый - white, Серый - gray, свело-синий - light dark blue, светло-зеленый - light green, светло-голубой - light blue, светло-красный - light red, светло-желтый - light yellow, ярко-белый - light white\n";
	cout << "Ведите цвет текста на английском:\n";
	cin >> b;
	if (b == "dark blue" || "Dark blue" || "Dark Blue") {
		g = 1;
	}
	else if (b == "dark green" || "Dark Green" || "Dark green") {
		g = 2;
	}
	else if (b == "blue" || "Blue") {
		g = 3;
	}
	else if (b == "red" || "Red") {
		g = 4;
	}
	else if (b == "purple" || "Purple") {
		g = 5;
	}
	else if (b == "yellow" || "Yellow") {
		g = 6;
	}
	else if (b == "white" || "White") {
		g = 7;
	}
	else if (b == "gray" || "Gray") {
		g = 8;
	}
	else if (b == "light dark blue" || "Light dark blue" || "Light Dark Blue") {
		g = 9;
	}
	else if (b == "light green" || "Light green" || "Light Green") {
		g = "A";
	}
	else if (b == "light blue" || "Light blue" || "Light Blue") {
		g = "B";
	}
	else if (b == "light red" || "Light red" || "Light Red") {
		g = "C";
	}
	else if (b == "light yellow" || "light yellow" || "light yellow") {
		g = "D";
	}
	else if (b == "light white" || "light white" || "light white") {
		g = "E";
	}
	else {
		cout << "Ошибка!\n";
		goto start;
	}
	if (g == "1" & d == "1") { // 1
		system("color 11");
	}
	else if (g == "1" & d == "2") {
		system("color 12");
	}
	else if (g == "1" & d == "3") {
		system("color 13");
	}
	else if (g == "1" & d == "4") {
		system("color 14");
	}
	else if (g == "1" & d == "5") {
		system("color 15");
	}
	else if (g == "1" & d == "6") {
		system("color 16");
	}
	else if (g == "1" & d == "7") {
		system("color 17");
	}
	else if (g == "1" & d == "8") {
		system("color 18");
	}
	else if (g == "1" & d == "9") {
		system("color 19");
	}
	else if (g == "1" & d == "A") {
		system("color 1A");
	}
	else if (g == "1" & d == "B") {
		system("color 1B");
	}
	else if (g == "1" & d == "C") {
		system("color 1C");
	}
	else if (g == "1" & d == "E") {
		system("color 1E");
	}
	else if (g == " 1" & d == "F") {
		system("color 1F");
	}
	else {
		goto next;
	}
next:	if (g == "2" & d == "1") {// 2
	system("color 21");
}
		else if (g == "2" & d == "2") {
	system("color 22");
}
		else if (g == "2" & d == "3") {
	system("color 23");
}
		else if (g == "2" & d == "4") {
	system("color 24");
}
		else if (g == "2" & d == "5") {
	system("color 25");
}
		else if (g == "2" & d == "6") {
	system("color 26");
}
		else if (g == "2" & d == "7") {
	system("color 27");
}
		else if (g == "2" & d == "8") {
	system("color 28");
}
		else if (g == "2" & d == "9") {
	system("color 29");
}
		else if (g == "2" & d == "A") {
	system("color 2A");
}
		else if (g == "2" & d == "B") {
	system("color 2B");
}
		else if (g == "2" & d == "C") {
	system("color 2C");
}
		else if (g == "2" & d == "E") {
	system("color 2E");
}
		else if (g == "2" & d == "F") {
	system("color 2F");
}
		else {
	goto next2;
}
	next2:	if (g == "3" & d == "1") { // 3
		system("color 31");
	}
			else if (g == "3" & d == "2") {
		system("color 32");
	}
			else if (g == "3" & d == "3") {
		system("color 33");
	}
			else if (g == "3" & d == "4") {
		system("color 34");
	}
			else if (g == "3" & d == "5") {
		system("color 35");
	}
			else if (g == "3" & d == "6") {
		system("color 36");
	}
			else if (g == "3" & d == "7") {
		system("color 37");
	}
			else if (g == "3" & d == "8") {
		system("color 38");
	}
			else if (g == "3" & d == "9") {
		system("color 39");
	}
			else if (g == "3" & d == "A") {
		system("color 3A");
	}
			else if (g == "3" & d == "B") {
		system("color 3B");
	}
			else if (g == "3" & d == "C") {
		system("color 3C");
	}
			else if (g == "3" & d == "E") {
		system("color 3E");
	}
			else if (g == "3" & d == "F") {
		system("color 3F");
	}
			else {
		goto next3;
	}
		next3:	if (g == "4" & d == "1") { // 4
			system("color 41");
		}
				else if (g == "4" & d == "2") {
			system("color 42");
		}
				else if (g == "4" & d == "3") {
			system("color 43");
		}
				else if (g == "4" & d == "4") {
			system("color 44");
		}
				else if (g == "4" & d == "5") {
			system("color 45");
		}
				else if (g == "4" & d == "6") {
			system("color 46");
		}
				else if (g == "4" & d == "7") {
			system("color 47");
		}
				else if (g == "4" & d == "8") {
			system("color 48");
		}
				else if (g == "4" & d == "9") {
			system("color 49");
		}
				else if (g == "4" & d == "A") {
			system("color 4A");
		}
				else if (g == "4" & d == "B") {
			system("color 4B");
		}
				else if (g == "4" & d == "C") {
			system("color 4C");
		}
				else if (g == "4" & d == "E") {
			system("color 4E");
		}
				else if (g == "4" & d == "F") {
			system("color 4F");
		}
				else {
			goto next4;
		}
			next4:	if (g == "5" & d == "1") { // 5
				system("color 51");
			}
					else if (g == "5" & d == "2") {
				system("color 52");
			}
					else if (g == "5" & d == "3") {
				system("color 53");
			}
					else if (g == "5" & d == "4") {
				system("color 54");
			}
					else if (g == "5" & d == "5") {
				system("color 55");
			}
					else if (g == "5" & d == "6") {
				system("color 56");
			}
					else if (g == "5" & d == "7") {
				system("color 57");
			}
					else if (g == "5" & d == "8") {
				system("color 58");
			}
					else if (g == "5" & d == "9") {
				system("color 59");
			}
					else if (g == "5" & d == "A") {
				system("color 5A");
			}
					else if (g == "5" & d == "B") {
				system("color 5B");
			}
					else if (g == "5" & d == "C") {
				system("color 5C");
			}
					else if (g == "5" & d == "E") {
				system("color 5E");
			}
					else if (g == "5" & d == "F") {
				system("color 5F");
			}
					else {
				goto next5;
			}
				next5:	if (g == "6" & d == "1") { // 6
					system("color 61");
				}
						else if (g == "6" & d == "2") {
					system("color 62");
				}
						else if (g == "6" & d == "3") {
					system("color 63");
				}
						else if (g == "6" & d == "4") {
					system("color 64");
				}
						else if (g == "6" & d == "5") {
					system("color 65");
				}
						else if (g == "6" & d == "6") {
					system("color 66");
				}
						else if (g == "6" & d == "7") {
					system("color 67");
				}
						else if (g == "6" & d == "8") {
					system("color 68");
				}
						else if (g == "6" & d == "9") {
					system("color 69");
				}
						else if (g == "6" & d == "A") {
					system("color 6A");
				}
						else if (g == "6" & d == "B") {
					system("color 6B");
				}
						else if (g == "6" & d == "C") {
					system("color 6C");
				}
						else if (g == "6" & d == "E") {
					system("color 6E");
				}
						else if (g == "6" & d == "F") {
					system("color 6F");
				}
						else {
					goto next6;
				}
					next6:	if (g == "7" & d == "1") { // 7
						system("color 71");
					}
							else if (g == "7" & d == "2") {
						system("color 72");
					}
							else if (g == "7" & d == "3") {
						system("color 73");
					}
							else if (g == "7" & d == "4") {
						system("color 74");
					}
							else if (g == "7" & d == "5") {
						system("color 75");
					}
							else if (g == "7" & d == "6") {
						system("color 76");
					}
							else if (g == "7" & d == "7") {
						system("color 77");
					}
							else if (g == "7" & d == "8") {
						system("color 78");
					}
							else if (g == "7" & d == "9") {
						system("color 79");
					}
							else if (g == "7" & d == "A") {
						system("color 7A");
					}
							else if (g == "7" & d == "B") {
						system("color 7B");
					}
							else if (g == "7" & d == "C") {
						system("color 7C");
					}
							else if (g == "7" & d == "E") {
						system("color 7E");
					}
							else if (g == "7" & d == "F") {
						system("color 7F");
					}

							else {
						goto next7;
					}
						next7:  if (g == "8" & d == "1") { // 8
							system("color 81");
						}
								else if (g == "8" & d == "2") {
							system("color 82");
						}
								else if (g == "8" & d == "3") {
							system("color 83");
						}
								else if (g == "8" & d == "4") {
							system("color 84");
						}
								else if (g == "8" & d == "5") {
							system("color 85");
						}
								else if (g == "8" & d == "6") {
							system("color 86");
						}
								else if (g == "8" & d == "7") {
							system("color 87");
						}
								else if (g == "8" & d == "8") {
							system("color 88");
						}
								else if (g == "8" & d == "9") {
							system("color 89");
						}
								else if (g == "8" & d == "A") {
							system("color 8A");
						}
								else if (g == "8" & d == "B") {
							system("color 8B");
						}
								else if (g == "8" & d == "C") {
							system("color 8C");
						}
								else if (g == "8" & d == "E") {
							system("color 8E");
						}
								else if (g == "8" & d == "F") {
							system("color 8F");
						}
								else {
							goto next8;
						}
							next8:	if (g == "9" & d == "1") { // 9
								system("color 91");
							}
									else if (g == "9" & d == "2") {
								system("color 92");
							}
									else if (g == "9" & d == "3") {
								system("color 93");
							}
									else if (g == "9" & d == "4") {
								system("color 94");
							}
									else if (g == "9" & d == "5") {
								system("color 95");
							}
									else if (g == "9" & d == "6") {
								system("color 96");
							}
									else if (g == "9" & d == "7") {
								system("color 97");
							}
									else if (g == "9" & d == "8") {
								system("color 98");
							}
									else if (g == "9" & d == "9") {
								system("color 99");
							}
									else if (g == "9" & d == "A") {
								system("color 9A");
							}
									else {
								if (g == "9" & d == "B") {
									system("color 9B");
								}
								else if (g == "9" & d == "C") {
									system("color 9C");
								}
								else if (g == "9" & d == "E") {
									system("color 9E");
								}
								else if (g == "9" & d == "F") {
									system("color 9F");
								}
								goto next9;
							}
								next9:	if (g == "A" & d == "1") { // 10
									system("color A1");
								}
										else if (g == "A" & d == "2") {
									system("color A2");
								}
										else if (g == "A" & d == "3") {
									system("color A3");
								}
										else if (g == "A" & d == "4") {
									system("color A4");
								}
										else if (g == "A" & d == "5") {
									system("color A5");
								}
										else if (g == "A" & d == "6") {
									system("color A6");
								}
										else if (g == "A" & d == "7") {
									system("color A7");
								}
										else if (g == "A" & d == "8") {
									system("color A8");
								}
										else if (g == "A" & d == "9") {
									system("color A9");
								}
										else if (g == "A" & d == "A") {
									system("color AA");
								}
										else if (g == "A" & d == "B") {
									system("color AB");
								}
										else if (g == "A" & d == "C") {
									system("color AC");
								}
										else if (g == "A" & d == "E") {
									system("color AE");
								}
										else if (g == "A" & d == "F") {
									system("color AF");
								}
										else {
									goto next10;
								}
									next10:	if (g == "B" & d == "1") { // 11
										system("color B1");
									}
											else if (g == "B" & d == "2") {
										system("color B2");
									}
											else if (g == "B" & d == "3") {
										system("color B3");
									}
											else if (g == "B" & d == "4") {
										system("color B4");
									}
											else if (g == "B" & d == "5") {
										system("color B5");
									}
											else if (g == "B" & d == "6") {
										system("color B6");
									}
											else if (g == "B" & d == "7") {
										system("color B7");
									}
											else if (g == "B" & d == "8") {
										system("color B8");
									}
											else if (g == "B" & d == "9") {
										system("color B9");
									}
											else if (g == "B" & d == "A") {
										system("color BA");
									}
											else if (g == "B" & d == "B") {
										system("color BB");
									}
											else if (g == "B" & d == "C") {
										system("color BC");
									}
											else if (g == "B" & d == "E") {
										system("color BE");
									}
											else if (g == " B" & d == "F") {
										system("color BF");
									}
											else {
										goto next11;
									}
										next11:	if (g == "C" & d == "1") { // 12
											system("color C1");
										}
												else if (g == "C" & d == "2") {
											system("color C2");
										}
												else if (g == "C" & d == "3") {
											system("color C3");
										}
												else if (g == "C" & d == "4") {
											system("color C4");
										}
												else if (g == "C" & d == "5") {
											system("color C5");
										}
												else if (g == "C" & d == "6") {
											system("color C6");
										}
												else if (g == "C" & d == "7") {
											system("color C7");
										}
												else if (g == "C" & d == "8") {
											system("color C8");
										}
												else if (g == "C" & d == "9") {
											system("color C9");
										}
												else if (g == "C" & d == "A") {
											system("color CA");
										}
												else if (g == "C" & d == "B") {
											system("color CB");
										}
												else if (g == "C" & d == "C") {
											system("color CC");
										}
												else if (g == "C" & d == "E") {
											system("color CE");
										}
												else if (g == "C" & d == "F") {
											system("color CF");
										}
												else {
											goto next12;
										}
											next12:	if (g == "E" & d == "1") { // 13
												system("color E1");
											}
													else if (g == "E" & d == "2") {
												system("color E2");
											}
													else if (g == "E" & d == "3") {
												system("color E3");
											}
													else if (g == "E" & d == "4") {
												system("color E4");
											}
													else if (g == "E" & d == "5") {
												system("color E5");
											}
													else if (g == "E" & d == "6") {
												system("color E6");
											}
													else if (g == "E" & d == "7") {
												system("color E7");
											}
													else if (g == "E" & d == "8") {
												system("color E8");
											}
													else if (g == "E" & d == "9") {
												system("color E9");
											}
													else if (g == "E" & d == "A") {
												system("color EA");
											}
													else if (g == "E" & d == "B") {
												system("color EB");
											}
													else if (g == "E" & d == "C") {
												system("color EC");
											}
													else if (g == "E" & d == "E") {
												system("color EE");
											}
													else if (g == "E" & d == "F") {
												system("color EF");
											}
													else {
												goto next13;
											}
												next13:	if (g == "F" & d == "1") { // 14
													system("color F1");
												}
														else if (g == "F" & d == "2") {
													system("color F2");
												}
														else if (g == "F" & d == "3") {
													system("color F3");
												}
														else if (g == "F" & d == "4") {
													system("color F4");
												}
														else if (g == "F" & d == "5") {
													system("color F5");
												}
														else if (g == "F" & d == "6") {
													system("color F6");
												}
														else if (g == "F" & d == "7") {
													system("color F7");
												}
														else if (g == "F" & d == "8") {
													system("color F8");
												}
														else if (g == "F" & d == "9") {
													system("color F9");
												}
														else if (g == "F" & d == "A") {
													system("color FA");
												}
														else if (g == "F" & d == "B") {
													system("color FB");
												}
														else if (g == "F" & d == "C") {
													system("color FC");
												}
														else if (g == "F" & d == "E") {
													system("color FE");
												}
														else if (g == "F" & d == "F") {
													system("color FF");
												}
														else {
													cout << "Ошибка!\n";
													goto start;
												}
}