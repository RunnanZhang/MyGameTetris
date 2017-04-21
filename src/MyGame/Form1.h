#pragma once
#include "file.h"


namespace MyGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  开始ToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  开始游戏SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  暂停游戏PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  继续游戏CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出游戏EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  游戏难度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  仙人指路ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  炉火纯青ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  牛刀小试ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  关于ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  重新开始游戏ToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;




	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->开始ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->开始游戏SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->暂停游戏PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->继续游戏CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->重新开始游戏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出游戏EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->游戏难度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->仙人指路ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->炉火纯青ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->牛刀小试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->关于ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(0, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(240, 480);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->开始ToolStripMenuItem, 
				this->设置ToolStripMenuItem, this->帮助HToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(376, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 开始ToolStripMenuItem
			// 
			this->开始ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->开始游戏SToolStripMenuItem, 
				this->暂停游戏PToolStripMenuItem, this->继续游戏CToolStripMenuItem, this->重新开始游戏ToolStripMenuItem, this->退出游戏EToolStripMenuItem});
			this->开始ToolStripMenuItem->Name = L"开始ToolStripMenuItem";
			this->开始ToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->开始ToolStripMenuItem->Text = L"游戏(&G)";
			// 
			// 开始游戏SToolStripMenuItem
			// 
			this->开始游戏SToolStripMenuItem->Name = L"开始游戏SToolStripMenuItem";
			this->开始游戏SToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->开始游戏SToolStripMenuItem->Text = L"开始游戏(&S)";
			this->开始游戏SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::开始游戏SToolStripMenuItem_Click);
			// 
			// 暂停游戏PToolStripMenuItem
			// 
			this->暂停游戏PToolStripMenuItem->Name = L"暂停游戏PToolStripMenuItem";
			this->暂停游戏PToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->暂停游戏PToolStripMenuItem->Text = L"暂停游戏(&P)";
			this->暂停游戏PToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::暂停游戏PToolStripMenuItem_Click);
			// 
			// 继续游戏CToolStripMenuItem
			// 
			this->继续游戏CToolStripMenuItem->Name = L"继续游戏CToolStripMenuItem";
			this->继续游戏CToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->继续游戏CToolStripMenuItem->Text = L"继续游戏(&C)";
			this->继续游戏CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::继续游戏CToolStripMenuItem_Click);
			// 
			// 重新开始游戏ToolStripMenuItem
			// 
			this->重新开始游戏ToolStripMenuItem->Name = L"重新开始游戏ToolStripMenuItem";
			this->重新开始游戏ToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->重新开始游戏ToolStripMenuItem->Text = L"重新开始游戏(&R)";
			this->重新开始游戏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::重新开始游戏ToolStripMenuItem_Click);
			// 
			// 退出游戏EToolStripMenuItem
			// 
			this->退出游戏EToolStripMenuItem->Name = L"退出游戏EToolStripMenuItem";
			this->退出游戏EToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->退出游戏EToolStripMenuItem->Text = L"退出游戏(&E)";
			this->退出游戏EToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::退出游戏EToolStripMenuItem_Click);
			// 
			// 设置ToolStripMenuItem
			// 
			this->设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->游戏难度ToolStripMenuItem});
			this->设置ToolStripMenuItem->Name = L"设置ToolStripMenuItem";
			this->设置ToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->设置ToolStripMenuItem->Text = L"设置(&S)";
			// 
			// 游戏难度ToolStripMenuItem
			// 
			this->游戏难度ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->仙人指路ToolStripMenuItem, 
				this->炉火纯青ToolStripMenuItem1, this->牛刀小试ToolStripMenuItem});
			this->游戏难度ToolStripMenuItem->Name = L"游戏难度ToolStripMenuItem";
			this->游戏难度ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->游戏难度ToolStripMenuItem->Text = L"游戏难度";
			// 
			// 仙人指路ToolStripMenuItem
			// 
			this->仙人指路ToolStripMenuItem->Name = L"仙人指路ToolStripMenuItem";
			this->仙人指路ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->仙人指路ToolStripMenuItem->Text = L"仙人指路";
			this->仙人指路ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::仙人指路ToolStripMenuItem_Click);
			// 
			// 炉火纯青ToolStripMenuItem1
			// 
			this->炉火纯青ToolStripMenuItem1->Name = L"炉火纯青ToolStripMenuItem1";
			this->炉火纯青ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->炉火纯青ToolStripMenuItem1->Text = L"炉火纯青";
			this->炉火纯青ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::炉火纯青ToolStripMenuItem1_Click);
			// 
			// 牛刀小试ToolStripMenuItem
			// 
			this->牛刀小试ToolStripMenuItem->Checked = true;
			this->牛刀小试ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->牛刀小试ToolStripMenuItem->Name = L"牛刀小试ToolStripMenuItem";
			this->牛刀小试ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->牛刀小试ToolStripMenuItem->Text = L"牛刀小试";
			this->牛刀小试ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::牛刀小试ToolStripMenuItem_Click);
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->关于ToolStripMenuItem});
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->帮助HToolStripMenuItem->Text = L"帮助(&H)";
			// 
			// 关于ToolStripMenuItem
			// 
			this->关于ToolStripMenuItem->Name = L"关于ToolStripMenuItem";
			this->关于ToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->关于ToolStripMenuItem->Text = L"关于...";
			this->关于ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::关于ToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(256, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Next：";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightPink;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(260, 63);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(103, 88);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Tomato;
			this->label2->Location = System::Drawing::Point(258, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Score：";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(287, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"0";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(260, 258);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(103, 241);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(376, 511);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"愤怒的方块";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyUp);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		bool SquareDown;//是否有方块在下降
	    int SquareLength;//方块的边长
		Graphics ^g;
		Graphics ^g1;
		System::Drawing::SolidBrush ^brush;
		Random ^random;
		Pen^ pen;
		int shape1;//记录shape数组的前二维的位序~！即代表是哪种方块和那种状态
		int shape2;
		int shapenext1;
		int shapenext2;

		int LengthDowing;
		int HeightDowing;//记录正在下落木块的长和高

		int BottomLimit;//记录下降方块最底部所在行，即纵坐标
		int TopLimit;//记录下降方块最顶部所在行，即纵坐标
		int RightLimit;//记录下降方块最右部所在列，即横坐标
		int LeftLimit;//记录下降方块最左部所在列，即横坐标

		int XWalk;//记录横坐标移动的次数！向右动为正
		int YWalk;//记录纵坐标移动的次数！向下动为正

		int NowColor;//代表颜色的数字
		int NextColor;//下个方块的颜色代号

		int Score;//记录分数

		int TimeNow;//记录现在表的时间间隔

		bool Show1;//判断第一个提示框是否出现过~！
		bool BoostAudio;//判断加速声音是否启动，我们只让它启动一次
		bool RuleExist;//规则是否存在，第一次出现画上规则。记录是否擦去

		System::Media::SoundPlayer  ^play;//播放声音的对象,注意增加命名空间
		String ^NowDirectory;//当前目录



	private:
		void SelectColor(int num)//为方块选择颜色的函数
		{
			if(num==0)
				brush=gcnew SolidBrush(Color::Red);
			else if(num==1)
				brush=gcnew SolidBrush(Color::Orange);
			else if(num==2)
				brush=gcnew SolidBrush(Color::Yellow);
			else if(num==3)
				brush=gcnew SolidBrush(Color::Blue);
			else if(num==4)
				brush=gcnew SolidBrush(Color::Green);
			else if(num==5)
				brush=gcnew SolidBrush(Color::Purple);
			else if(num==6)
				brush=gcnew SolidBrush(Color::Black);
			else if(num==7)
				brush=gcnew SolidBrush(Color::Cyan);
			else if(num==8)
				brush=gcnew SolidBrush(this->pictureBox1->BackColor);//用于消去颜色;
		}

		void DrawSquares(int NowSquare[4][2],int color,Color ^colorPen)//i,j代表数组里面的位序，从0开始
		{
			this->SelectColor(color);//选择颜色新建画刷
			pen=gcnew Pen(*colorPen,2.0f);
			for(int i=0 ;  i<4 ; i++)
			{
				int x1=NowSquare[i][0]*this->SquareLength;
				int y1=NowSquare[i][1]*this->SquareLength;
				g->FillRectangle(brush,x1,y1,SquareLength,SquareLength);
				g->DrawRectangle(pen,x1,y1,SquareLength,SquareLength);
			}
		}
		void DrawSquare(int i,int j , int color,Color ^colorPen)//画一个方块的函数
		{
			this->SelectColor(color);	
			pen=gcnew Pen(*colorPen,2.0f);
			int x1=i*this->SquareLength;
			int y1=j*this->SquareLength;
			g->FillRectangle(brush,x1,y1,SquareLength,SquareLength);
			g->DrawRectangle(pen,x1,y1,SquareLength,SquareLength);
		}

		void DrawAll(int y)//全部重绘的函数,y为消去第i行后全部重绘
		{	
			g->Clear(this->pictureBox1->BackColor);
			//先刷新地图数据
			for(int i=0 ; i<15 ; i++)//注意30,15为计算出的结果，为地图的长和宽
					 for(int j=y ; j>0 ; j--)
					 {
						 Map[i][j]=Map[i][j-1];//把上面格子的状态传递到下面;
						 SquareColor[i][j]=SquareColor[i][j-1];
					 }
			for(int i=0 ; i<15 ; i++)//重新绘制
					 for(int j=0 ; j<30 ; j++)
						 if(Map[i][j]==1)
							 this->DrawSquare(i,j,SquareColor[i][j],Color::White);	
		}

		bool WalkAble()//判断向下是否有路
		{
			TopLimit=30;
			BottomLimit=0;
			for(int i=0 ; i<4 ; i++)
			{
				if(TopLimit > NowSquare[i][1])  TopLimit = NowSquare[i][1];//判断最顶面在哪里
				if(BottomLimit < NowSquare[i][1])  BottomLimit = NowSquare[i][1];//判断最下方在哪里	
			}
			for(int i=0 ; i<4 ; i++)
				if(BottomLimit>=29 || Map[ NowSquare[i][0] ][ NowSquare[i][1]+1 ]==1)//是-1才可以走,注意这里数字均为数组里，从0开始，所以少1
					return false;
			return true;
		}
		bool LeftWalkAble()//判断是否可以向左移动
		{
			LeftLimit=15;
			for(int i=0 ; i<4 ; i++)
				if(LeftLimit > NowSquare[i][0])  LeftLimit = NowSquare[i][0];//判断最右面在哪里
			for(int i=0 ; i<4 ; i++)
				if(LeftLimit==0 || Map[ NowSquare[i][0]-1 ][ NowSquare[i][1] ]==1)//是-1才可以走,注意这里数字均为数组里，从0开始，所以少1
					return false;
			return true;
		}
		bool RightWalkAble()//判断是否可以向右移动
		{
			RightLimit=0;
			for(int i=0 ; i<4 ; i++)
				if(RightLimit < NowSquare[i][0])  RightLimit = NowSquare[i][0];//判断最右面在哪里
			for(int i=0 ; i<4 ; i++)
				if(RightLimit==14 || Map[ NowSquare[i][0]+1 ][ NowSquare[i][1] ]==1)//是-1才可以走,注意这里数字均为数组里，从0开始，所以少1
					return false;
			return true;
		}
		bool DisappearAble(int y)//判断对应纵坐标为y的这一列是否可以消去
		{
			for(int i=0 ; i<15 ; i++)
				if(Map[i][y]==-1)
					return false;
			return true;
		}
		bool ChangeSuccess()//能否变形的函数
		{
			for(int i=0 ; i<4 ; i++)
				if(Map[ NowSquare[i][0] ][ NowSquare[i][1] ]!=-1 || NowSquare[i][1]>28 || NowSquare[i][0]<0 )//应该写29，但各种BUG……有待解决
					return false;
			return true;
		}

		void Changed()//方块变形的函数
		{
			this->shape2=(shape2+1)%4;//对数组shape里面的方块状态改变
			
			int a=0;
			for(int i=0 ; i<4 ; i++)//备份变换前
				for(int j=0 ; j<2 ; j++)
					YesterdaySquare[i][j]=NowSquare[i][j];
			this->LengthDowing=shape[shape1][shape2][16];
			this->HeightDowing=shape[shape1][shape2][17];
			for(int j=0 ; j<16 ; j++)
			{
				if(shape[shape1][shape2][j]==1)
				{
					NowSquare[a][0]=j%4+this->XWalk+4;
					NowSquare[a][1]=j/4+this->YWalk;
					a++;
				}
			}
			if(this->ChangeSuccess() )
			{
				play->SoundLocation=this->NowDirectory+"\\Audio\\change.wav";
				play->Load();
				play->Play();//以上三句为加载声音
				this->DrawSquares(YesterdaySquare,Pic1BackCol,this->pictureBox1->BackColor);
				this->DrawSquares(NowSquare,this->NowColor,Color::White);		
			}
			else
			{
				for(int i=0 ; i<4 ; i++)//备份变换前
				for(int j=0 ; j<2 ; j++)
					NowSquare[i][j]=YesterdaySquare[i][j];//备份赋值回去.
			}
		}
		void DrawNextSquare()//在picturebox2中绘画出下一个方块的代码
		{
			for(int i=0 ;  i<4 ; i++)
					 {				 
						 int x2=(NowSquare[i][0]-3)*this->SquareLength;
						 int y2=(NowSquare[i][1]+1)*this->SquareLength;
						 brush=gcnew SolidBrush(this->pictureBox2->BackColor);	//消去以前的
						 pen=gcnew Pen(this->pictureBox2->BackColor,2.0f);
						 g1->FillRectangle(brush,x2,y2,SquareLength,SquareLength);
						 g1->DrawRectangle(pen,x2,y2,SquareLength,SquareLength);					 					 
					 }
					 for(int i=0 ;  i<4 ; i++)//绘制现在的
					 {
						 int x1=(NextSquare[i][0]-3)*this->SquareLength;
						 int y1=(NextSquare[i][1]+1)*this->SquareLength;
						 this->SelectColor(this->NextColor);
						 pen=gcnew Pen(Color::White,2.0f);
						 g1->FillRectangle(brush,x1,y1,SquareLength,SquareLength);
						 g1->DrawRectangle(pen,x1,y1,SquareLength,SquareLength);
					 }
		}
		void DrawRule()
		{
			brush=gcnew SolidBrush(Color::Purple);
			System::Drawing::Font ^font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,25.0f,FontStyle::Italic);
			g->DrawString("游戏规则:",font,brush,25,6);
			font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,12.0f,FontStyle::Bold);
			brush=gcnew SolidBrush(Color::Red);
			g->DrawString("启动游戏：请按P（暂停键）或菜单中开始游戏",font,brush,8,56);
			g->DrawString("或菜单中开始游戏键",font,brush,8,90);
			g->DrawString("变形键：W || UP ",font,brush,8,124);
			g->DrawString("加速键：S || DOWN ",font,brush,8,158);
			g->DrawString("左移键：A || LEFT ",font,brush,8,192);
			g->DrawString("右移键：D || RIGHT ",font,brush,8,226);
			font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,18.0f,FontStyle::Bold);
			brush=gcnew SolidBrush(Color::Green);
			g->DrawString("难度成长：",font,brush,8,260);
			font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,12.0f,FontStyle::Bold);
			brush=gcnew SolidBrush(Color::Blue);
			g->DrawString("一次消去的行越多得分越多",font,brush,8,290);
			g->DrawString("随着挑战者比分的不断增长",font,brush,8,310);
			g->DrawString("除了方块下落速度的飙升外",font,brush,8,330);
			g->DrawString("还会有更高障碍等您挑战^_^：",font,brush,8,350);
			g->DrawString("请留心观察会有意外收获",font,brush,8,370);
		}
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 g=this->pictureBox1->CreateGraphics();
				 g1=this->pictureBox2->CreateGraphics();
				 play=gcnew System::Media::SoundPlayer();//创建播放声音句柄
				 NowDirectory=System::Environment::CurrentDirectory;//获得当前目录
				 this->SquareDown=false;//一开始无下降方块
				 this->SquareLength=this->pictureBox1->Width/wide;//方块的边长
				 random=gcnew Random();
				 this->Score=0;//分数初始化为0
				 this->TimeNow=this->timer1->Interval;
				 this->Show1=false;//第一个提示框出现与否 赋初值
				 this->BoostAudio=false;//加速声音是否启动
				 for(int i=0 ; i<15 ; i++)//注意30,15为计算出的结果，为地图的长和宽
					 for(int j=0 ; j<30; j++)
						 Map[i][j]=-1;//一开始全都没方块

				  for(int i=0 ; i<15 ; i++)//给颜色地图赋值
					 for(int j=0 ; j<30; j++)
						 SquareColor[i][j]=-1;

                 //以下为为第一次生成方块的代码
				 shapenext1=random->Next(0,7);
				 shapenext2=random->Next(0,4);//随机哪种形状和状态
				 this->NextColor=random->Next(0,8);//随机出八种颜色
				 int a=0;
				 for(int j=0 ; j<16 ; j++)
				 {
					 if(shape[shapenext1][shapenext2][j]==1)
					 {
						 NextSquare[a][0]=j%4+5;//给初始的方块数组赋值,我们让最开始生成的居中
						 NextSquare[a][1]=j/4;//对应纵坐标，不是宽！！
						 a++;
					 }
				 }
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->SquareDown==false)//无下降方块时
				 {
					 for(int i=0 ; i<4 ; i++)//把下一个方块赋值给现在
						 for(int j=0 ; j<2 ; j++)
							 NowSquare[i][j]=NextSquare[i][j];
					 shape1=shapenext1;//赋值成现在数组前二维的状态!
					 shape2=shapenext2;
					 this->NowColor=this->NextColor;//赋值为现在颜色代号
					 this->LengthDowing=shape[shape1][shape2][16];//计算当前块得长和高
					 this->HeightDowing=shape[shape1][shape2][17];
					 shapenext1=random->Next(0,7);//随机哪种形状和状态
					 shapenext2=random->Next(0,4);
					 if(this->Score>=5000)//到1000分我们加上隐藏方块
					 {
						 this->timer1->Enabled=false;
						 this->NextColor=random->Next(0,9);//随机出八种颜色加上背景色，此时会出现隐藏块~~！！！
						 if(this->Show1==false)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->Load();
							 play->Play();//以上三句为加载声音
							 MessageBox::Show("恭喜您更上一层楼，请注意之后将会有隐藏方块，请留意预告栏\r\n^_^注：为降低难度此时的隐藏方块仍有边框可见"
							 ,"提示",MessageBoxButtons::OK,MessageBoxIcon::Information);
						 }
						 this->Show1=true;//以后不再显示提示框
						 this->timer1->Interval=this->TimeNow;//得恢复现在时间，如果摁着加速键下去正好消去到1000分
						 //在弹出MessageBox时松开按键，此时不触发此事件，所以我们在这里恢复间隔~~!!!
						 this->timer1->Enabled=true;
					 }
					 else
						 this->NextColor=random->Next(0,8);//随机出八种颜色,无隐藏方块
					 int a=0;
					 this->XWalk=0;  this->YWalk=0;//初始还一部没走，在居中位置生成	 
					 for(int j=0 ; j<16 ; j++)
					 {
						 if(shape[shapenext1][shapenext2][j]==1)
						 {
							 NextSquare[a][0]=j%4+5;//给初始的方块数组赋值,我们让最开始生成的居中
							 NextSquare[a][1]=j/4;//对应纵坐标，不是宽！！
							 a++;
						 }
					 }	 
					 this->DrawNextSquare();//在picturebox2中绘画出下一个方块的代码
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);		
					 this->SquareDown=true;//已经有了下降的方块
				 }
				 else//已经有方块在下降
				 {
					 this->YWalk++;
				     this->DrawSquares(NowSquare,Pic1BackCol,this->pictureBox1->BackColor);//先把之前的消失掉~！
					// this->DrawSquares(NowSquare,Color::FromArgb(0,255,0,0),Color::Black );
					 for(int i=0 ; i<4 ; i++)
						 NowSquare[i][1]++;//纵坐标下移!
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);		
				 }
				 if(this->WalkAble()==false)//如果无路可走！！！
				 {
					 this->SquareDown=false;
					 play->SoundLocation=this->NowDirectory+"\\Audio\\bottom.wav";
					 play->Load();
					 play->Play();//以上三句为加载声音
					 //首先要对Map进行赋值
					 for(int i=0 ; i<4 ; i++)
					 {
							 Map[ NowSquare[i][0] ] [ NowSquare[i][1] ]=1;//代表不可以走,即有方块.
							 SquareColor[ NowSquare[i][0] ] [ NowSquare[i][1] ]=this->NowColor;//把颜色写进颜色地图中去
					 }

					 //扫描消去完整行
					 int KillNumOnce=0;//一次消掉多少行的计数变量。
					 for(int i=0 ; i<this->HeightDowing ; i++)
						 if(this->DisappearAble(this->BottomLimit-i))//如果可以消去
						 {
							 KillNumOnce++;
							 this->DrawAll(this->BottomLimit-i);
							 this->Score=this->Score+100;
							 i--;						 
						 }
						 if(KillNumOnce==1)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
						 }
						 if(KillNumOnce==2)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
							 this->Score=this->Score+100;//消去二行一次，我们给三百分
							 play->SoundLocation=this->NowDirectory+"\\Audio\\doublekill.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
							 
						 }
						 if(KillNumOnce==3)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
							 this->Score=this->Score+200;//消去三行给五百分
							 play->SoundLocation=this->NowDirectory+"\\Audio\\triplekill.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
							 
						 }
						 if(KillNumOnce==4)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
							 this->Score=this->Score+400;//四行给800分,记得减去前面加过的.
							 play->SoundLocation=this->NowDirectory+"\\Audio\\monsterkill.wav";
							 play->LoadAsync();//传说中的异步播放……
							 play->PlaySync();//以上三句为加载声音
							 
						 }
						 this->label3->Text=this->Score.ToString();
						 this->timer1->Interval=200-(this->Score/1000)*20;//每增1000分，那么速度加快！！！
						 this->TimeNow=this->timer1->Interval;//记录间隔，为恢复现在表的间隔做准备
						 if(this->TopLimit==0)//游戏结束时段
						 {
							 this->timer1->Enabled=false;
							 this->Text="Game Over";
							 play->SoundLocation=this->NowDirectory+"\\Audio\\over.wav";
							 play->Load();//传说中的异步播放……
							 play->Play();//以上三句为加载声音
							 MessageBox::Show("嗨，你好菜鸟！\r\n点击菜单中重新开始游戏键可重新体验","Game Over",MessageBoxButtons::OK,MessageBoxIcon::Warning);
						 }			 
				 }
			 }
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {		
				 if( (e->KeyCode==Keys::A || e->KeyCode==Keys::Left ) && this->LeftWalkAble() 
					 && this->timer1->Enabled==true && this->SquareDown==true)//向左移动
				 {			 
					 this->timer1->Enabled=false;//想这样实现塞进去的功能，但仍然不可以……有待努力解决
					 play->SoundLocation=this->NowDirectory+"\\Audio\\left.wav";
					 play->Load();
					 play->Play();//以上三句为加载声音
					 this->XWalk--;
					 this->DrawSquares(NowSquare,Pic1BackCol,this->pictureBox1->BackColor);//先把之前的消失掉~！
					 for(int i=0 ; i<4 ; i++)
						 NowSquare[i][0]--;//横坐标左移
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);//重新绘制一下 ，否则得等下降后才重新绘制，会出现闪烁。
					 this->timer1->Enabled=true;
				 }
				 else if((e->KeyCode==Keys::D || e->KeyCode==Keys::Right )  && this->RightWalkAble() 
					 && this->timer1->Enabled==true && this->SquareDown==true)
				 {
					 this->timer1->Enabled=false;
					 play->SoundLocation=this->NowDirectory+"\\Audio\\right.wav";
					 play->Load();
					 play->Play();//以上三句为加载声音
					 this->XWalk++;
					 this->DrawSquares(NowSquare,Pic1BackCol,this->pictureBox1->BackColor);//先把之前的消失掉~！
					 for(int i=0 ; i<4 ; i++)
						 NowSquare[i][0]++;//横坐标右移!
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);//重新绘制
					 this->timer1->Enabled=true;
				 }
				 else if((e->KeyCode==Keys::S || e->KeyCode==Keys::Down) 
					 && this->timer1->Enabled==true && this->SquareDown==true)//加速下降
				 {
					 this->timer1->Interval=25;
					 if(this->BoostAudio==false)
					 {
						 play->SoundLocation=this->NowDirectory+"\\Audio\\boost.wav";
						 play->Load();
						 play->Play();//以上三句为加载声音
					 }
					 this->BoostAudio=true;
				 }
				 else if( (e->KeyCode==Keys::W || e->KeyCode==Keys::Up) 
					 && this->timer1->Enabled==true && this->SquareDown==true)//变换键
				 {
					 //this->timer1->Enabled=false;//先停表
					 this->Changed();
					 //this->timer1->Enabled=true;
				 }
				 else if(e->KeyCode==Keys::P)
				 {
					 if(this->RuleExist==true)
					 {
						 g->Clear(this->pictureBox1->BackColor);
						 this->RuleExist=false;
					 }
					 this->timer1->Enabled=!this->timer1->Enabled;//暂停游戏
					 play->SoundLocation=this->NowDirectory+"\\Audio\\pause.wav";
					 play->Load();
					 play->Play();//以上三句为加载声音
				 }
			 }
		 
private: System::Void Form1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode==Keys::S || e->KeyCode==Keys::Down)//放开加速键则会恢复速度
			 {
				 //play->Stop();
				 this->BoostAudio=false;//只有松开的时候才赋值回false
				 this->timer1->Interval=this->TimeNow;//恢复正常时间
			 }
		 }

private: System::Void 开始游戏SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->RuleExist==true)
			 {
				 g->Clear(this->pictureBox1->BackColor);
				 this->RuleExist=false;
			 }
			 this->timer1->Enabled=true;
		 }
private: System::Void 暂停游戏PToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->RuleExist==true)
			 {
				 g->Clear(this->pictureBox1->BackColor);
				 this->RuleExist=false;
			 }
			 this->timer1->Enabled=!this->timer1->Enabled;//暂停游戏
			 play->SoundLocation=this->NowDirectory+"\\Audio\\pause.wav";
			 play->Load();
			 play->Play();//以上三句为加载声音
		 }
private: System::Void 继续游戏CToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Enabled=true;
		 }
private: System::Void 退出游戏EToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }

private: System::Void 仙人指路ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Interval=50;
			 this->TimeNow=this->timer1->Interval;
			 this->仙人指路ToolStripMenuItem->Checked=true;
			 this->炉火纯青ToolStripMenuItem1->Checked=false;
			 this->牛刀小试ToolStripMenuItem->Checked=false;
		 }
private: System::Void 炉火纯青ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Interval=150;
			 this->TimeNow=this->timer1->Interval;
			 this->仙人指路ToolStripMenuItem->Checked=false;
			 this->炉火纯青ToolStripMenuItem1->Checked=true;
			 this->牛刀小试ToolStripMenuItem->Checked=false;
		 }
private: System::Void 牛刀小试ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Interval=200;
			 this->TimeNow=this->timer1->Interval;
			 this->仙人指路ToolStripMenuItem->Checked=false;
			 this->炉火纯青ToolStripMenuItem1->Checked=false;
			 this->牛刀小试ToolStripMenuItem->Checked=true;
		 }
private: System::Void 关于ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("欢迎来到愤怒的方块~\r\n请在游戏菜单里点击开始游戏或者摁暂停键P开始\r\n你可以根据喜好选择WASD和上下左右二组按键来进行游戏！"
					 ,"提示",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
private: System::Void 重新开始游戏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->SquareDown=false;//一开始无下降方块
			 this->Score=0;//分数初始化为0
			 this->label3->Text="0";
			 this->Text="愤怒的方块";
			 this->timer1->Interval=200;
			 this->TimeNow=this->timer1->Interval;
			 this->timer1->Enabled=true;
			 this->Show1=false;//第一个提示框出现与否 赋初值
			 g->Clear(this->pictureBox1->BackColor);//清除所有效果
			 g1->Clear(this->pictureBox2->BackColor);
			 for(int i=0 ; i<15 ; i++)//注意30,15为计算出的结果，为地图的长和宽
				 for(int j=0 ; j<30; j++)
					 Map[i][j]=-1;//一开始全都没方块
			 for(int i=0 ; i<15 ; i++)//给颜色地图赋值
				 for(int j=0 ; j<30; j++)
					 SquareColor[i][j]=-1;

                 //以下为为第一次生成方块的代码
				 shapenext1=random->Next(0,7);
				 shapenext2=random->Next(0,4);//随机哪种形状和状态
				 this->NextColor=random->Next(0,8);//随机出八种颜色
				 int a=0;
				 for(int j=0 ; j<16 ; j++)
				 {
					 if(shape[shapenext1][shapenext2][j]==1)
					 {
						 NextSquare[a][0]=j%4+5;//给初始的方块数组赋值,我们让最开始生成的居中
						 NextSquare[a][1]=j/4;//对应纵坐标，不是宽！！
						 a++;
					 }
				 }
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
					 this->DrawRule();
					 this->timer2->Enabled=false;
					 this->RuleExist=true;				
		 }
private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 this->DrawAll(1);//重绘时重新画出方块
		 }
};
}

