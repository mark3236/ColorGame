//
//  GameViewController.h
//  ColorGame
//
//  Created by iOS Developer on 2013. 12. 1..
//  Copyright (c) 2013년 iOS Developer. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GameViewController : UIViewController

@property int time;
@property NSTimer *gametimer;

@property (weak, nonatomic) IBOutlet UILabel *timer;
@property (weak, nonatomic) IBOutlet UILabel *question;
@property (weak, nonatomic) IBOutlet UIButton *Opt1setting;
@property (weak, nonatomic) IBOutlet UIButton *Opt2setting;
@property (weak, nonatomic) IBOutlet UIButton *Opt3setting;
@property (weak, nonatomic) IBOutlet UIButton *Opt4setting;
@property int sort1, sort2, sort3, sort4;
@property int score;
@property (weak, nonatomic) IBOutlet UILabel *scorelabel;



//이렇게 모조리 전역으로 쓰지 않는 방법도 있을 것 같은데...
/*
@property int randomtext, randomcolor;
@property int trueanswertext, trueanswercolor;
@property int falseanswer1text, falseanswer1color, falseanswer2text, falseanswer2color, falseanswer3text, falseanswer3color;
 */
//아놔... 필요없었다.

- (IBAction)ReturnToMenu;

- (IBAction)Opt1;
- (IBAction)Opt2;
- (IBAction)Opt3;
- (IBAction)Opt4;


@end
