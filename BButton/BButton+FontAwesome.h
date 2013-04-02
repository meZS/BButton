//
//  BButton+FontAwesome.h
//
//  Created by Pit Garbe on 27.09.12.
//  Copyright (c) 2012 Pit Garbe. All rights reserved.
//
//  https://github.com/leberwurstsaft/FontAwesome-for-iOS
//

#import "BButton.h"

typedef enum {
    FAIconGlass = 0,
    FAIconMusic,
    FAIconSearch,
    FAIconEnvelope,
    FAIconHeart,
    FAIconStar,
    FAIconStarEmpty,
    FAIconUser,
    FAIconFilm,
    FAIconThLarge,
    FAIconTh,
    FAIconThList,
    FAIconOk,
    FAIconRemove,
    FAIconZoomIn,
    FAIconZoomOut,
    FAIconOff,
    FAIconSignal,
    FAIconCog,
    FAIconTrash,
    FAIconHome,
    FAIconFile,
    FAIconTime,
    FAIconRoad,
    FAIconDownloadAlt,
    FAIconDownload,
    FAIconUpload,
    FAIconInbox,
    FAIconPlayCircle,
    FAIconRepeat,
    FAIconRefresh,
    FAIconListAlt,
    FAIconLock,
    FAIconFlag,
    FAIconHeadphones,
    FAIconVolumeOff,
    FAIconVolumeDown,
    FAIconVolumeUp,
    FAIconQrcode,
    FAIconBarcode,
    FAIconTag,
    FAIconTags,
    FAIconBook,
    FAIconBookmark,
    FAIconPrint,
    FAIconCamera,
    FAIconFont,
    FAIconBold,
    FAIconItalic,
    FAIconTextHeight,
    FAIconTextWidth,
    FAIconAlignLeft,
    FAIconAlignCenter,
    FAIconAlignRight,
    FAIconAlignJustify,
    FAIconList,
    FAIconIndentLeft,
    FAIconIndentRight,
    FAIconFacetimeVideo,
    FAIconPicture,
    FAIconPencil,
    FAIconMapMarker,
    FAIconAdjust,
    FAIconTint,
    FAIconEdit,
    FAIconShare,
    FAIconCheck,
    FAIconMove,
    FAIconStepBackward,
    FAIconFastBackward,
    FAIconBackward,
    FAIconPlay,
    FAIconPause,
    FAIconStop,
    FAIconForward,
    FAIconFastForward,
    FAIconStepForward,
    FAIconEject,
    FAIconChevronLeft,
    FAIconChevronRight,
    FAIconPlusSign,
    FAIconMinusSign,
    FAIconRemoveSign,
    FAIconOkSign,
    FAIconQuestionSign,
    FAIconInfoSign,
    FAIconScreenshot,
    FAIconRemoveCircle,
    FAIconOkCircle,
    FAIconBanCircle,
    FAIconArrowLeft,
    FAIconArrowRight,
    FAIconArrowUp,
    FAIconArrowDown,
    FAIconShareAlt,
    FAIconResizeFull,
    FAIconResizeSmall,
    FAIconPlus,
    FAIconMinus,
    FAIconAsterisk,
    FAIconExclamationSign,
    FAIconGift,
    FAIconLeaf,
    FAIconFire,
    FAIconEyeOpen,
    FAIconEyeClose,
    FAIconWarningSign,
    FAIconPlane,
    FAIconCalendar,
    FAIconRandom,
    FAIconComment,
    FAIconMagnet,
    FAIconChevronUp,
    FAIconChevronDown,
    FAIconRetweet,
    FAIconShoppingCart,
    FAIconFolderClose,
    FAIconFolderOpen,
    FAIconResizeVertical,
    FAIconResizeHorizontal,
    FAIconBarChart,
    FAIconTwitterSign,
    FAIconFacebookSign,
    FAIconCameraRetro,
    FAIconKey,
    FAIconCogs,
    FAIconComments,
    FAIconThumbsUp,
    FAIconThumbsDown,
    FAIconStarHalf,
    FAIconHeartEmpty,
    FAIconSignout,
    FAIconLinkedinSign,
    FAIconPushpin,
    FAIconExternalLink,
    FAIconSignin,
    FAIconTrophy,
    FAIconGithubSign,
    FAIconUploadAlt,
    FAIconLemon,
    FAIconPhone,
    FAIconCheckEmpty,
    FAIconBookmarkEmpty,
    FAIconPhoneSign,
    FAIconTwitter,
    FAIconFacebook,
    FAIconGithub,
    FAIconUnlock,
    FAIconCreditCard,
    FAIconRss,
    FAIconHdd,
    FAIconBullhorn,
    FAIconBell,
    FAIconCertificate,
    FAIconHandRight,
    FAIconHandLeft,
    FAIconHandUp,
    FAIconHandDown,
    FAIconCircleArrowLeft,
    FAIconCircleArrowRight,
    FAIconCircleArrowUp,
    FAIconCircleArrowDown,
    FAIconGlobe,
    FAIconWrench,
    FAIconTasks,
    FAIconFilter,
    FAIconBriefcase,
    FAIconFullscreen,
    FAIconGroup,
    FAIconLink,
    FAIconCloud,
    FAIconBeaker,
    FAIconCut,
    FAIconCopy,
    FAIconPaperClip,
    FAIconSave,
    FAIconSignBlank,
    FAIconReorder,
    FAIconListUl,
    FAIconListOl,
    FAIconStrikethrough,
    FAIconUnderline,
    FAIconTable,
    FAIconMagic,
    FAIconTruck,
    FAIconPinterest,
    FAIconPinterestSign,
    FAIconGooglePlusSign,
    FAIconGooglePlus,
    FAIconMoney,
    FAIconCaretDown,
    FAIconCaretUp,
    FAIconCaretLeft,
    FAIconCaretRight,
    FAIconColumns,
    FAIconSort,
    FAIconSortDown,
    FAIconSortUp,
    FAIconEnvelopeAlt,
    FAIconLinkedin,
    FAIconUndo,
    FAIconLegal,
    FAIconDashboard,
    FAIconCommentAlt,
    FAIconCommentsAlt,
    FAIconBolt,
    FAIconSitemap,
    FAIconUmbrella,
    FAIconPaste,
    FAIconUserMd
} FAIcon;

@interface BButton (FontAwesome)

#pragma mark - Class 
+ (BButton *)awesomeButtonWithIcon:(FAIcon)icon;
+ (BButton *)awesomeButtonWithIcon:(FAIcon)icon color:(UIColor *)color;
+ (BButton *)awesomeButtonWithIcon:(FAIcon)icon color:(UIColor *)color fontSize:(CGFloat)fontSize;

#pragma mark - Instance 
- (void)makeAwesomeWithIcon:(FAIcon)icon;
- (void)makeAwesomeWithIcon:(FAIcon)icon color:(UIColor *)color;
- (void)makeAwesomeWithIcon:(FAIcon)icon color:(UIColor *)color fontSize:(CGFloat)fontSize;

#pragma mark - Utilities
+ (NSString *)stringFromAwesomeIcon:(FAIcon)icon;
- (void)constrainFontToButtonSize;

@end