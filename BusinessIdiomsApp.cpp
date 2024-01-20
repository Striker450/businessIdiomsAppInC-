#include <iostream>
#include <Windows.h>
using namespace std;

void AppTitle() {
    cout << "\t\t\t\tWELCOME TO 505 BUSINESS IDIOMS IN ENGLISH LANGUAGE\n\n";
}


void CommandList() {
    cout << "\t\t\t\tCOMMANDS FOR SEARCHING FOR IDIOMS BELOW:\n\n";
    cout << endl; cout << endl;
    cout << "\t\t\t\t[a, b, c, d, e, f, g, h, i, j, k, l]\n\n";
    cout << "\t\t\t\t[m, n, o, p, q, r, s, t, u, v, w, x]\n\n";
    cout << "\t\t\t\t[y, z]\n\n";
    cout << endl;
    cout << "\t\t\t\tPlease note that some letters are unavailable...\n\n";
    cout << "\t\t\t\tTo exit the app simply type 'exit' in the terminal to quit!\n\n";
    cout << "\t\t\t\tTo clear screen simply type 'cls'\n\n";
    cout << "\t\t\t\tTo view a command list simply type 'help'\n\n";
    cout << "\t\t\t\tTo change color simply type 'color' and any number\n\n";

}

void BusinessIdioms() 
{
    string idioms[505] = 
    {
     "about time (too) = to finally do something",
     "above board = legal",
     "across the board = including everyone or everything",
     "all in a day's work = a task that falls into normal daily work routines",
     "(all) par for the course = normal, to be expected",
     "at loggerheads = to disagree strongly with someone",
     "at the helm = in charge (also 'take the helm')",
     "back down = withdraw your demans in a negotiation, or accept you've lost the argument",
     "backlash = a negative consequence or reaction after an action or event",
     "backroom boys = people whose work is important but who don't get much recognition",
     "backtrack / backpedal = change your opinion or decision on something,\n\t\t\toften to dilute it or 'water it down'",
     "(be) bailed out = given money to survive",
     "ball park figure / estimate = an approximate amount",
     "(get) bang for your buck = get value for money",
     "(be a) barometer = a barometer is an instrument measuring changes in air pressure.",
     "be loaded = be very rich",
     "be on fighting form = to be in good (economic) shape",
     "be on to a winner = do something which will probably be successful",
     "be / come under the fire = be attacked or criticised",
     "bean-counter = an accountant",
     "bear fruit =  lead to the result you expected",
     "bear the brunt = have to face the worst part of something",
     "beat around the bush = not get to the point",
     "bedrock = the foundations",
     "beer money = a small extra income for going out, etc",
     "behind closed doors = secret, not in public",
     "behind the scenes = something happening in secret while other things are visible",
     "belt-tightening = reducing expenses",
     "between a rock and a hard place = to be in a difficult position, with no obvious solutions",
     "big boys = major players in a market",
     "big cheese / shot / wig = an important person",
     "big fish in a small pond = a person / company with influence in a small sector or sphere",
     "bit the bullet = to make a tough decision",
     "bite / hold your tongue = to hold back from saying what you want",
     "black hole = a large gap",
     "blank cheque(Br Eng) blank check(US spelling) = to give someone complete control over something",
     "bomb(to bomb) = to fail",
     "boom time = a time of great prosperity",
     "bottleneck = delay or blockage(especially for credit, investment or procedures)",
     "bottom line = the final figure on the balance sheet / overall success or impact",
     "bottom out = reach the lowest point",
     "bounce back = recover from earlier losses or problems",
     "brains behind(to be the brains behind) = the person who invented / managed a plan or strategy",
     "break the bank = to be too expensive to buy",
     "bricks and mortar  = house or shop as a physical asset or investment",
     "bring something to its kness(be brought to its knees) = drive a company to the brink of collapse",
     "brush aside = refuse to listen to criticisms, complaints, suggestions etc",
     "bubble(burst the bubble) = successful period of time or activity",
     "(a) bumpy ride = experiencing a lot of problems",
     "burn your bridges = leave a company on such bad terms that you will never be rehired",
     "business as usual = normal business conditions which have resumed",
     "buy out (buyout) = buy someone's share of the business to gain complete control",
     "buzz word = a word used a lot at the moment, or in a particular industry / sector",
     "call time on = end",
     "carry weight = (of words, opinions etc) be influential, have authority",
     "carve out a niche = concentrate on one sector or sub-sector",
     "cash cow = a product or service that makes a lot of money (often because the initial costs have been covered)",
     "cash in on = gain financial rewards",
     "cash-starved = lacking cash / money",
     "cash-strapped = not having money available",
     "casino banking = speculative or risky financial activities",
     "cause a stir = make people talk about something(because they're surprised or angry)",
     "churn rate = rate at which you win and lose customers (or employees)",
     "clamp down on / crack down on = enfore penalties against an illegal activity (a clampdown / a crackdown)",
     "claw back / a claw-back = take back / recover (money already paid / market share etc)",
     "clear a debt / loan = pay off",
     "clear the air = do something to end and argument",
     "climd the corporate / career ladder = get promoted into better jobs",
     "clinch / cut / reach / seal a deal = get a deal",
     "close a loophole = end a (legal) practice that results in an anomaly",
     "cog in the machine / wheel = someone who only has a small job in a business",
     "cold call = make a sales call to someone you've never met or spoken to before",
     "company man = someone who's loyal to the company",
     "cook the books = alter official accounting information to mislead or cheat",
     "cook up = invent a plan or scheme to do something dishonest",
     "corner the market = become market leader in a particular sector or niche",
     "corporate clone = a company man",
     "cost an arm and a leg = cost a lot of money",
     "cough up = pay what you owe",
     "crack a market / problem = know how to get in to a market or how to solve a problem",
     "(have a) crack at = make an attempt at solving a problem",
     "crack down on = become stricter at enforcing regulations",
     "crack on with = take action now and not delay any further",
     "create an even / uneven playing field = create fair / unfair conditions for everyone",
     "credit crunch / credit squeeze = reduction in the availability of credit for businesses",
     "crunch time = an important time when a decision has to be made / a result needs to be achieved",
     "cushion the impact = soften the effect of a decision",
     "cut back(on) = reduce spending",
     "cut corners = make savings on time, quality or cost",
     "cut / give someone some slack = not criticise someone / give someone freedom to act",
     "cut your losses = end investment or business activity in order to stop losing money",
     "damp squib = something which is less exciting than predicted",
     "daylight robbery(British English) = excessively expensive to the point of being theft",
     "dead in the water = proposal or idea which never got off the ground / will never go forward",
     "dead weight = someone who doesn't contribute to the organisation",
     "dead wood = people who don't contribute to the company",
     "debt ceiling = total amount the US government can borrow",
     "dig your heels in = refuse to do something or be persuaded",
     "dip into = to use some of your money(especially savings)",
     "dip your toes into = start slowly or on a small scale to try something out",
     "dirt cheap = extermely cheap",
     "dish the dirt = reveal all the secrets",
     "do a roaring trade = sell something quickly",
     "do risky business = sell something well",
     "do sterling work / a sterling job = do very good work",
     "dog-eat-dog = competitive",
     "dole out = distribute money(the dole = unemployment benefit)",
     "done deal = an agreement which has already been made",
     "donkey work = difficult or less glamorous parts of the job",
     "dot your i's and cross your t's = pay attention to the small details",
     "double-dip recession = when the economy falls into recession, recovers slightly, then falls back into recession again.",
     "down the drain = be wasted(money, time, effort etc)",
     "drag on(talks) = continue slowly and without result",
     "drag your feet = delay making a decision",
     "draw a line under something = put an end to something",
     "drive a hard bargain = negotiate tough conditions",
     "a drop-off = reduction in something(i.e. demand)",
     "earn brownie points = make someone else have a better impression of you",
     "(at the) eleventh hour = the last moment",
     "face the music = to face a problem and not deny that it exists",
     "fall on deaf ears = not be listened to / be ignored",
     "fall on hard times = be experiencing difficult times",
     "fall short = fail to reach targets",
     "fall through = collapse / fail(deals / negotiations)",
     "fast-track a project / person = to make something go quicker / to help a person",
     "fat cats = top people in a company who earh a lot of money",
     "feather your nest = making sure you have or make enough money to have a good life",
     "fill / boost the coffers = increase revenue or money available",
     "fire sale = selling goods or assets at a much lower price",
     "fired(be fired) = lose your job",
     "fiscal cliff(American English) = the combination of a reduction in the budget deficit and an economic slowdown",
     "flatline = to show no signs of life or movement",
     "flood the market = sell a lot of your product in a particular market, especially if it's much cheaper than the competition",
     "foot the bill = pay for",
     "a free hand = have freedom to do what you want",
     "funny money = counterfit (=false) money",
     "game / work the system = use the rules or laws to your advantage",
     "gain ground = make progress",
     "gather pace = speed up",
     "gear up = work harder in preparation for something",
     "get a rough deal = do badly out of an arrangement",
     "get a word in edgeways = manage to interrupt a conversion",
     "get down to brass tacks = concentrate on the main details",
     "get into hot water = get into trouble",
     "get something off the ground = start something",
     "get on like a house on fire = get on very well with someone",
     "get on the right side of someone = find a way to be liked by someone",
     "get right / straight to the point = talk about an issue directly",
     "get the hang of something = start to understand how to do something",
     "get the sack = be fired from a job",
     "get the show on the road = get started(often used in meetings)",
     "get the wrong end of the stick = misunderstand something",
     "get your act together = start working in a better or more efficient way",
     "get your feet under the table = feel more comfortable in a new job",
     "get your fot in the door = get an opening in a company or on the career ladder",
     "get your wires crossed = misunderstand information",
     "give someone a run for their money = not make it easy for another company to be successful",
     "give someone a tongue-lashing = severely reprimand someone",
     "give someone the low-down = give someone the most important facts",
     "give someone / something the thumbs down = reject someone / something",
     "glass ceiling = an invisible barrier to promotion (often in reference to women)",
     "gloss over = avoid talking about something in detail",
     "go belly up = fail",
     "go bust / under = when a business fails",
     "go cap(hat) in hand = ask someone very humbly for money",
     "go down the pan = when the business does badly or fails",
     "go empty-handed = be left with nothing",
     "go for a song = be sold extremely cheaply",
     "go from bad to worse = get progressively worse",
     "go round in circles = keep talking about something without finding a solution",
     "go / turn sour = become less positive (also for deals - 'the deal went sour')",
     "go the extra mile = make an extra effort to do something",
     "go though the roof = (of prices) to be very high",
     "go-to person = the person with the most experience or expertise in something",
     "golden handcuffs = incentives such as a large salary to persuade someone to stay in their job",
     "golden handshake = a large amount of money given to someone when they leave the job",
     "golden opportunity = a very good opportunity",
     "golden share = a share that can outvote all other shares, giving the shareholder a veto",
     "gravy train = a structure or business from which people can make money easily",
     "grease somebody's palm = give money to someone as a bribe",
     "(give someone the) green light = allow someone to start a project",
     "green shoots of recovery = signs that the economy is recovering",
     "hammer out a deal = take a long time to agree all the terms and conditions",
     "hang out your shingle(American English) = start your own business",
     "hard-nosed = business minded",
     "hard-pressed = facing problems and not having enough money",
     "hard sell = an aggressive way of selling (contrast with 'soft sell')",
     "have a finger in every pie = be involved in many different things",
     "have a lot on your plate = have a lot of work to do",
     "have a quick word = talk to someone briefly",
     "have / put all your eggs in one basket = only have one plan or strategy",
     "have an / the edge over = have a competitive advantage",
     "have deep pockets = have a lot of money",
     "have (something / tricks) up your sleeve = have a secret plan or advantage that you can use",
     "have your hand in the till = steal from the company (Be caught with your hand in the till)",
     "have your hands tied = be prevented from doing something",
     "heads to / will roll = someone is likely to lose their job",
     "hear something on the grapevine = hear something informally",
     "heavy hitter = a person or company with a lot of power",
     "high flier = someone who's going to go far in a career",
     "(take) a hit / a haircut = accept a loss",
     "hit a deadlock = unable to progress further",
     "hit the ground running = start a new joy fully prepared, without needing any help",
     "hoist(show) the white flag = surrender",
     "hold all the aces = be in the strongest negotiating position",
     "hold out for = not accept anything less",
     "horse-trading = try to gain an advantage during a deal",
     "hot under the collar = angry",
     "in a nutshell = the summary",
     "in a tight corner / spot = in a difficult situation",
     "in black and white = in writing",
     "in freefall = to fall rapidly",
     "in its heyday = at the height of its success",
     "in line for = except to get(money / promotion etc)",
     "(be) in over your head = to be unable to do something, due to lack of skills or experience",
     "in rude health = in a good(i.e. healthy) position",
     "in someone's good / bad books = to be liked / disliked by someone",
     "in the black = in credit(constrat = in the red)",
     "in the doldrums = to be doing badly",
     "in the driving seat = the person in control",
     "in the firing line = the person / people most likely to take the blame for something",
     "in the market for = ready to buy something",
     "in the pipeline = being prepared",
     "in the red = overdrawn(compare: in the black)",
     "in(out of) the running = be a potential winner / loser in a market / competition",
     "in the works = being prepared",
     "irons in the fire = involved in more than one thing at the same time.",
     "jewel in the crown = most valuable part of something",
     "join the chorus = add your voice to others",
     "jump on the bandwagon = copy others when something has been proved to be successful",
     "jump ship = leave a company because you think you have better chances elsewhere",
     "jump the gun = to start something too early",
     "jump through hoops = go through many obstacles (usually bureaucratic)",
     "keep a lid on = contain",
     "keep a low profile / keep your head down = not draw attention to yourself",
     "keep pace with / keep up with = maintain value or parity",
     "keep someone in the dark = not let someone know what is happening",
     "keep someone in the loop = keep someone informed",
     "keep something afloat = keep something going",
     "keep something under wraps = keep something secret",
     "keep tabs on = monitor someone or something",
     "keep your eye on the ball = stay focused on the objective",
     "keep your eyes / ears open = be alert to something",
     "keep your head above water = try to survive",
     "keep your nose to the grindstone = someone who works hard and steadily",
     "kick in = have an effect",
     "kick-start (economy / growth) = to stimulate",
     "knock-on effect = cause something else to happen",
     "knock out of the park (US) = do much better than expected",
     "lay off = make redundant",
     "lay the groundwork = do work in preparation for something to be successful",
     "learn the ropes = learn how to do a particular job correctly",
     "leave someone out in the cold = exclude someone",
     "let fly = start shouting or criticising",
     "let someone go = fire someone",
     "licence (license) to print money = a means of making a lot of money",
     "lift the lid = reveal",
     "like-for-like = a comparison measuring two identical things (such as sales over thesame period)",
     "lose ground = lose market share to a competitor",
     "lost generation = generation of young people expected to do worse than their parents over a number of indicators, including employment, wealth and housing",
     "magic bullet = an easy solution to a difficult problem",
     "make a clean break = end a relationship with someone / something",
     "make a comeback = do well again after a difficult period",
     "make a foray into = enter the market",
     "make a killing = make a great deal of money",
     "make a mint = make a lot of money",
     "make a go of = work hard at something",
     "make headway = make progress",
     "make it up as you go along = improvise",
     "make it your business = take responsibility for something.",
     "make money hand over fist = make a lot of money",
     "make small talk = talk about trivial things before getting down to business",
     "make strides = improve or develop",
     "make the grade = achieve the necessary standard for something",
     "make up for = compensate",
     "make up the lost ground = recover in order to return to previous position",
     "make your mark = become successful",
     "make-or-break = something that will either be successful or a failure",
     "(give someone / get your) marching orders = be fired",
     "market jitters = market uncertainty",
     "mean business = be serious",
     "millstone = something heavy that weighs down something (such as the economy)",
     "mix business with pleasure = to combine work and fun",
     "money for old rope = money which is easily earned",
     "money-laundering = putting money earned illegally into the legal system",
     "money spinner = something that makes a lot of money",
     "move the goalposts = change the rules",
     "movers and shakers = industry or company leaders who have a lot of influence",
     "mushroom = rapid proliferation in something",
     "(a) new broom = chance to change the way things are done",
     "no-frills = basic, without extra luxuries or add-ons",
     "not worth the paper (it's) written on = have no real or enforceable value",
     "not up to scratch = not as good as it should be.",
     "number crunching / number cruncher = working with numbers",
     "nuts and bolts = detailed facts and the practical aspects",
     "off course / off track = not on schedule (vs 'on track')",
     "on a shoe string = operate on very little money.",
     "on a tight budget = not have much money to spend",
     "on an even keel = going smoothly",
     "on course (also 'on track') = on schedule (vs 'off track')",
     "on someone's watch = while someone was in charge",
     "be / go on strike = take industrial action / refuse to work",
     "on the back of = as a result of something else",
     "on the cheap = to spend less money for something / to do something cheaply",
     "on the dole = receiving unemployment benefit",
     "on the line = at risk (especially jobs, reputation)",
     "on the make = trying to get money",
     "on the same wavelength = having the same opinions / understanding as someone else",
     "(throw someone) on the scrapheap = make someone or something redundant, no longer economically viable",
     "on the table = on offer which is being considered",
     "on the up (and up) = doing well, becoming successful",
     "on the warpath = be angry with someone",
     "on-off = when something stops and starts",
     "one-off = a) original design etc, b) singular event",
     "out of kilter = not working properly, not be in proportion",
     "(not be) out of the woods yet = not out of danger yet, still likely to face problems",
     "paper over the cracks = try to hide big disagreements or problems",
     "pass the buck = to shift blame or responsibility to someone else",
     "pave the way = produce the right environment for success",
     "pay lip service = say you support something, but don't do anything",
     "pay someone off = a payoff",
     "pay through the nose = pay too much money",
     "pay your way = not depend on others for financial contributions",
     "payday loan (lender) = short-term (high interest) loan to tide you over until your next pay day",
     "(hit) paydirt (American English) = discover something that will make you rich / successful",
     "penny pinching = trying to save very small amounts of money",
     "peter out = reduce gradually",
     "pick up (business / economy) = to improve",
     "pick up the tab / bill / cost = be responsible for paying for something",
     "piece of the action / a slice of the action / a slice of the pie = a share in activity or profits",
     "piggyback = use something which is already successful to help something else succeed",
     "pin money = small amount of money (originally money given by a husband to his wife for her personal use)",
     "play a / its / their / your etc part (in doing something) = contribute to a situation",
     "play (the) devil's advocate = take the opposite side in an argument to make sure all issues are covered.",
     "Play down = minimise the importance of something",
     "play for time = try to delay something",
     "play piggy in the middle = caught in an argument between two people but unable to decide who to support",
     "play second fiddle = be second in importance to another person",
     "play someone / something at their own game = use the same methods as someone / something else to fight or compete",
     "play something by ear = not plan what you will say / do in advance, but take your cues from the situation",
     "play the game = accept the rules",
     "play the market = try to earn money on the stock market",
     "play your cards close to your chest = not let other people know what you're thinking or planning",
     "plough in(to) = invest money into",
     "plug = to sell / promote a product",
     "poach = 'steal' an employee from a competitor",
     "pop-up = a temporary shop or activity",
     "pull out all the stops = make every effort",
     "pull out of = withdraw from",
     "pull strings = use influential friends in order to obtain an advantage.",
     "pull the plug = to stop something",
     "pull up the ladder (behind you) = not give younger people the same advantages as you had",
     "pull your weight = do your fair share of the work",
     "pump up = inflate",
     "punch above its weight = have an effect greater than its size would imply",
     "purse strings (loosen or tighten) = to relax or tighten your budget",
     "put a spanner (wrench) in the works = cause problems to a plan",
     "put someone's back up = irritate someone",
     "put someone in the picture = let someone know what's happening",
     "put the brakes on = slow something down",
     "put your hand in your pocket = pay for something / donate money to something",
     "put your money where your mouth is = give financial support to something you support",
     "(in search of a) quick buck = money made quickly",
     "race against time = work very quickly in order to do or finish something",
     "race to the bottom = to use price-cutting as a strategy to be more competitive",
     "rack up = accumulate (bills, debts or losses)",
     "rainy day (rainy day fund / save up for a rainy day) = a time when you don't have enough money",
     "raise your game = improve your performance",
     "ramp up = increase speed or business activity",
     "read between the lines = understand something even if it isn't communicated directly",
     "read the small print = read every part of a contract",
     "red tape = rules and bureaucracy",
     "rein in = keep control of / reduce something",
     "ride something out / ride out something = survive a difficult situation",
     "right-hand man = person who supports the boss, or is second in command",
     "ring-fence = financially separating part of a company's assets in order in order to protect them",
     "rip-off (to rip off) = so expensive that it's almost like stealing your money",
     "rising star = someone who will do well in an organisation",
     "robin hood tax = tax that effects rich people only",
     "(hit / reach) rock bottom = reach the lowest point",
     "rogue trader = (bank) trader who ignores or contravenes the bank's own guidelines",
     "roll over = transfer from one bank / company to another",
     "roll up your sleeves = get ready for hard work.",
     "rubberstamp = to approve something automatically without discussing it first",
     "run a tight ship = manage a company efficiently and economically",
     "run aground = run into difficulty",
     "run into / come up against a brick wall = encounter an obstacle",
     "run into trouble = experience problems",
     "run on empty = with no new ideas, energy or financing",
     "run round in circles = panicking or finding it difficult to get something done",
     "run up costs / debt = increase the debt you owe",
     "rushed off your feet = be very busy",
     "saddled with debt = have too much debt to pay",
     "safe haven = a secure place for keeping money or investments",
     "scrape by = barely make enough money to live on",
     "seal of approval = approval from a higher authority",
     "see eye to eye = agree with another person",
     "see light at the end of the tunnel = believe that the worst is over",
     "see off = succeed against competition or threats",
     "sell like hotcakes = sell very quickly",
     "set aside / put aside = allocate a sum of money to save, etc",
     "set the record straight = state publicly (often to correct previous information)",
     "set your sights on (also train your sights on) = aim at a particular market",
     "sharp practice (British English) = dishonest business practice",
     "shine a light = investigate, bring something into the open",
     "shoot up = rise rapidly",
     "shop around = look for the best deal",
     "shore up = support something in danger of failing",
     "(be / feel) shortchanged = not get value for money",
     "sign off = a) sign / formalise a deal; b) decided to be too ill to work ('be signed off work')",
     "sing from the same song sheet / hymn sheet = say the same things as someone else / speak consistently",
     "single someone out = focus on one person (rather than including everyone)",
     "sit on your hands = not do anything",
     "sitting on a small fortune / on a goldmine = have a product or service that is extremely profitable",
     "slowdown = a reduction in economic activity",
     "slush fund = fund of money kept for dishonest purposes",
     "snap up = buy at low cost, making a good investment",
     "soft sell (contrast 'hard sell') = non - aggressive sales tactics",
     "spark a frenzy = create lots of excitement",
     "spark a row = cause an argument",
     "spin-off = a secondary product or service derived from the initial product or service",
     "stamp out = stop bad or illegal practices from happening again",
     "start the ball rolling = start an activity to encourage others to join in",
     "stash away = hide (illegal) money",
     "stay ahead of the pack = be in front of the competition",
     "steal a march on = gain an advantage by doing something before another person or company",
     "step down = to retire or leave your job",
     "stick to your guns = refuse to change direction (or change your 'story')",
     "strike while the iron is hot = take advantage of an opportunity",
     "stumbling block = an obstacle",
     "a suit = someone who works in an office and has to wear a suit",
     "sweeten the deal (a sweetener) = an incentive to agree a deal",
     "sweetheart deal = an unfair agreement made between friends",
     "tail off = decrease",
     "take a heavy toll = have a negative effect",
     "take a nosedive = fall",
     "take home (take home pay) = the amount of money you are paid",
     "take off = be successful (sales, etc)",
     "take on = a) employ; b) fight",
     "take sides = support one side against the other in an argument",
     "take someone to the cleaners = take all the money from a person / company",
     "take the plunge = decide to take a risk",
     "take the reins = become leader",
     "take up = accept employment and start work",
     "talent pipeline = supply of promising candidates",
     "Talk / be at cross purposes = not understand another person because you're talking about different things",
     "talk shop = talk about your job when you're in a social situation",
     "tap someone for money = ask someone else to pay",
     "tax haven = country or jurisdiction where taxation levels are very low",
     "tax loophole =a legal way ('hole' in the system) that allows you to pay less tax",
     "ten a penny = very common",
     "test the water = try something (i.e. the market) before you fully commit to it",
     "the high street (particularly British English) = retail economy",
     "(get / gain) the upper hand = have greater control, authority or advantage",
     "the public purse = state finances",
     "think on your feet = able to make decisions without thinking about them first",
     "throw cold water over (an idea, a plan) = say why something wouldn't be a good idea",
     "throw good money after bad = continue spending money on a loss-making enterprise or product",
     "throw money at something = try to solve a problem by spending money on it",
     "tick the boxes = fulfill requirements",
     "top dog = a very important person in a company",
     "touch base = find out what's happening",
     "toxic assets = assets that weaken a company / bank",
     "trade down / trade up = exchange a more expensive item for a cheaper one (trade up = exchange a cheaper item for a more expensive one)",
     "tread water = to stay in the same position, neither getting better nor worse",
     "tricks of the trade = clever or expert way of doing things, especially in a job.",
     "turn a blind eye = know something is happening, but pretend not to notice it",
     "turn around (a turnaround) = improve the economic performance",
     "turn the corner = emerge from a difficult time",
     "under the table = secret / illegal payments",
     "up-and-coming = fashionable, with good potential",
     "up and running = a business which is in operation",
     "up for grabs = available (i.e. something is for sale, or an open opportunity)",
     "up to your ears / eyes (in debt / in paperwork) = have a lot of debt / work",
     "(face) an uphill battle / struggle = have a very difficult task or problem to solve",
     "walk out = go on strike",
     "walk the plank = to resign or be fired",
     "water down = reduce the strength or scope of something",
     "wave through = approve without discussion ('rubberstamp')",
     "weather the storm / the crisis = survive a difficult time",
     "weed out = get rid of people / policies / products etc that aren't productive",
     "well-heeled = affluent / rich",
     "wet behind the ears = inexperienced",
     "wheeling and dealing = someone involved in many schemes and activities",
     "a whistleblower = an employee who exposes illegal practices in an organisation",
     "whizz kid = young person who is very skilled at something",
     "win-win = a situation where everyone benefits",
     "wind down = reduce business activity before closing the business",
     "wind up = close a company",
     "windfall = to gain an unexpected amount of money",
     "wipe off / wipe something off the value = reduce the value of something",
     "with no strings attached = without any limits or obligations on an agreement",
     "wonk = an expert in a particular field (often a young person) who examines all the technical details",
     "work flat out = work very hard, without a break",
     "work out the / some kinks = to solve the problems on a project",
     "work to rule (British English) = work slowly and only do what's strictly in your contract, in protest against working conditions",
     "work your fingers to the bone = work extremely hard",
     "wriggle room (British English) / wiggle room (American English) = room for manoeuvre",
     "write down = reduce / agree that the tax or debt no longer needs to be paid",
     "write off losses / debts = no longer be liable for losses or debts",
     "yes man = an employee who always agrees with the boss",
     "zero-hours contract = a type of contract where the employer doesn't guarantee a number of hours or set income"
    };
 
    string input = "";
    string exit = "exit";
    string clearScreen = "cls";
    char newTab = '\t';
  
    while (input != exit) {
        cout << "\t\t\t\tType any letter from above to find an idiomatic expression: ";
        cin >> input;
        cout << endl; cout << endl;

        if (input == "a") {
            for (int i = 0; i < 6; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "b") {
            for (int i = 7; i < 53; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "c") {
            for (int i = 53; i < 91; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "d") {
            for (int i = 91; i < 117; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "e") {
            for (int i = 117; i < 119; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "f") {
            for (int i = 119; i < 136; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "g") {
            for (int i = 136; i < 182; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "h") {
            for (int i = 182; i < 208; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "i") {
            for (int i = 208; i < 227; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "j") {
            for (int i = 227; i < 233; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "k") {
            for (int i = 233; i < 249; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "l") {
            for (int i = 249; i < 260; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "m") {
            for (int i = 260; i < 289; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "n") {
            for (int i = 289; i < 295; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "o") {
            for (int i = 295; i < 316; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "p") {
            for (int i = 316; i < 362; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "q") {
            for (int i = 362; i < 363; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "r") {
            for (int i = 363; i < 392; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "s") {
            for (int i = 392; i < 432; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "t") {
            for (int i = 433; i < 469; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "u") {
            for (int i = 469; i < 475; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "v") {
            cout << newTab << newTab << newTab << newTab << "There is no v at the moment!" << endl;
        }
        else if (input == "w") {
            for (int i = 475; i < 500; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "y") {
            for (int i = 500; i < 501; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "z") {
            for (int i = 501; i < 502; i++) {
                cout << newTab << newTab << newTab << newTab << idioms[i] << endl;
            }
            cout << endl;
        }
        else if (input == "cls") {
            system("cls");
        }
        else if (input == "help") {
            CommandList();
        }
        else if (input == "yellow") {
           system("COLOR 0e");
        }
        else if (input == "default") {
            system("COLOR 0f");
        }
        else if (input == "green") {
            system("COLOR 0a");
        }
        else if (input == "red") {
            system("COLOR 0c");
        }
        else if (input == "purple") {
            system("COLOR 0d");
        }
        else if (input == "blue") {
            system("COLOR 09");
        }
        else if (input == "black") {
            system("COLOR 00");
        }
        else if (input == "gray") {
            system("COLOR 08");
        }
        else if (input == "aqua") {
            system("COLOR 0B");
            }
        else {
            cout << newTab << newTab << newTab << newTab << "Sorry that is an incorrect input. So please try again..." << endl;
            cout << endl;
        }
    }
  
}



int main()
{
   
    AppTitle();
    CommandList();
    BusinessIdioms();
   
    
    return 0;
}

void AppTitle();
void CommandList();
void BusinessIdioms();