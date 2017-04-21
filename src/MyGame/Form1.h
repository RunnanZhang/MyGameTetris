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
	/// Form1 ժҪ
	///
	/// ����: ������Ĵ�������ƣ�����Ҫ����
	///          ����������������� .resx �ļ��������й���Դ���������ߵ�
	///          ����Դ�ļ��������ԡ�����
	///          �������������˴���Ĺ���
	///          ���ػ���Դ��ȷ������
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʼToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʼ��ϷSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ͣ��ϷPToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ϷCToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳���ϷEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��Ϸ�Ѷ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ָ·ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ¯����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ţ��С��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���¿�ʼ��ϷToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;




	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��ʼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʼ��ϷSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ͣ��ϷPToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ϷCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���¿�ʼ��ϷToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳���ϷEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��Ϸ�Ѷ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ָ·ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->¯����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ţ��С��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->��ʼToolStripMenuItem, 
				this->����ToolStripMenuItem, this->����HToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(376, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��ʼToolStripMenuItem
			// 
			this->��ʼToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->��ʼ��ϷSToolStripMenuItem, 
				this->��ͣ��ϷPToolStripMenuItem, this->������ϷCToolStripMenuItem, this->���¿�ʼ��ϷToolStripMenuItem, this->�˳���ϷEToolStripMenuItem});
			this->��ʼToolStripMenuItem->Name = L"��ʼToolStripMenuItem";
			this->��ʼToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->��ʼToolStripMenuItem->Text = L"��Ϸ(&G)";
			// 
			// ��ʼ��ϷSToolStripMenuItem
			// 
			this->��ʼ��ϷSToolStripMenuItem->Name = L"��ʼ��ϷSToolStripMenuItem";
			this->��ʼ��ϷSToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->��ʼ��ϷSToolStripMenuItem->Text = L"��ʼ��Ϸ(&S)";
			this->��ʼ��ϷSToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��ʼ��ϷSToolStripMenuItem_Click);
			// 
			// ��ͣ��ϷPToolStripMenuItem
			// 
			this->��ͣ��ϷPToolStripMenuItem->Name = L"��ͣ��ϷPToolStripMenuItem";
			this->��ͣ��ϷPToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->��ͣ��ϷPToolStripMenuItem->Text = L"��ͣ��Ϸ(&P)";
			this->��ͣ��ϷPToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::��ͣ��ϷPToolStripMenuItem_Click);
			// 
			// ������ϷCToolStripMenuItem
			// 
			this->������ϷCToolStripMenuItem->Name = L"������ϷCToolStripMenuItem";
			this->������ϷCToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->������ϷCToolStripMenuItem->Text = L"������Ϸ(&C)";
			this->������ϷCToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::������ϷCToolStripMenuItem_Click);
			// 
			// ���¿�ʼ��ϷToolStripMenuItem
			// 
			this->���¿�ʼ��ϷToolStripMenuItem->Name = L"���¿�ʼ��ϷToolStripMenuItem";
			this->���¿�ʼ��ϷToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->���¿�ʼ��ϷToolStripMenuItem->Text = L"���¿�ʼ��Ϸ(&R)";
			this->���¿�ʼ��ϷToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::���¿�ʼ��ϷToolStripMenuItem_Click);
			// 
			// �˳���ϷEToolStripMenuItem
			// 
			this->�˳���ϷEToolStripMenuItem->Name = L"�˳���ϷEToolStripMenuItem";
			this->�˳���ϷEToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->�˳���ϷEToolStripMenuItem->Text = L"�˳���Ϸ(&E)";
			this->�˳���ϷEToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::�˳���ϷEToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->��Ϸ�Ѷ�ToolStripMenuItem});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->����ToolStripMenuItem->Text = L"����(&S)";
			// 
			// ��Ϸ�Ѷ�ToolStripMenuItem
			// 
			this->��Ϸ�Ѷ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->����ָ·ToolStripMenuItem, 
				this->¯����ToolStripMenuItem1, this->ţ��С��ToolStripMenuItem});
			this->��Ϸ�Ѷ�ToolStripMenuItem->Name = L"��Ϸ�Ѷ�ToolStripMenuItem";
			this->��Ϸ�Ѷ�ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->��Ϸ�Ѷ�ToolStripMenuItem->Text = L"��Ϸ�Ѷ�";
			// 
			// ����ָ·ToolStripMenuItem
			// 
			this->����ָ·ToolStripMenuItem->Name = L"����ָ·ToolStripMenuItem";
			this->����ָ·ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->����ָ·ToolStripMenuItem->Text = L"����ָ·";
			this->����ָ·ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ָ·ToolStripMenuItem_Click);
			// 
			// ¯����ToolStripMenuItem1
			// 
			this->¯����ToolStripMenuItem1->Name = L"¯����ToolStripMenuItem1";
			this->¯����ToolStripMenuItem1->Size = System::Drawing::Size(124, 22);
			this->¯����ToolStripMenuItem1->Text = L"¯����";
			this->¯����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::¯����ToolStripMenuItem1_Click);
			// 
			// ţ��С��ToolStripMenuItem
			// 
			this->ţ��С��ToolStripMenuItem->Checked = true;
			this->ţ��С��ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ţ��С��ToolStripMenuItem->Name = L"ţ��С��ToolStripMenuItem";
			this->ţ��С��ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->ţ��С��ToolStripMenuItem->Text = L"ţ��С��";
			this->ţ��С��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ţ��С��ToolStripMenuItem_Click);
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->����ToolStripMenuItem});
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(61, 21);
			this->����HToolStripMenuItem->Text = L"����(&H)";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->����ToolStripMenuItem->Text = L"����...";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::����ToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(256, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Next��";
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
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Tomato;
			this->label2->Location = System::Drawing::Point(258, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Score��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
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
			this->Text = L"��ŭ�ķ���";
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
		bool SquareDown;//�Ƿ��з������½�
	    int SquareLength;//����ı߳�
		Graphics ^g;
		Graphics ^g1;
		System::Drawing::SolidBrush ^brush;
		Random ^random;
		Pen^ pen;
		int shape1;//��¼shape�����ǰ��ά��λ��~�������������ַ��������״̬
		int shape2;
		int shapenext1;
		int shapenext2;

		int LengthDowing;
		int HeightDowing;//��¼��������ľ��ĳ��͸�

		int BottomLimit;//��¼�½�������ײ������У���������
		int TopLimit;//��¼�½�������������У���������
		int RightLimit;//��¼�½��������Ҳ������У���������
		int LeftLimit;//��¼�½��������������У���������

		int XWalk;//��¼�������ƶ��Ĵ��������Ҷ�Ϊ��
		int YWalk;//��¼�������ƶ��Ĵ��������¶�Ϊ��

		int NowColor;//������ɫ������
		int NextColor;//�¸��������ɫ����

		int Score;//��¼����

		int TimeNow;//��¼���ڱ��ʱ����

		bool Show1;//�жϵ�һ����ʾ���Ƿ���ֹ�~��
		bool BoostAudio;//�жϼ��������Ƿ�����������ֻ��������һ��
		bool RuleExist;//�����Ƿ���ڣ���һ�γ��ֻ��Ϲ��򡣼�¼�Ƿ��ȥ

		System::Media::SoundPlayer  ^play;//���������Ķ���,ע�����������ռ�
		String ^NowDirectory;//��ǰĿ¼



	private:
		void SelectColor(int num)//Ϊ����ѡ����ɫ�ĺ���
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
				brush=gcnew SolidBrush(this->pictureBox1->BackColor);//������ȥ��ɫ;
		}

		void DrawSquares(int NowSquare[4][2],int color,Color ^colorPen)//i,j�������������λ�򣬴�0��ʼ
		{
			this->SelectColor(color);//ѡ����ɫ�½���ˢ
			pen=gcnew Pen(*colorPen,2.0f);
			for(int i=0 ;  i<4 ; i++)
			{
				int x1=NowSquare[i][0]*this->SquareLength;
				int y1=NowSquare[i][1]*this->SquareLength;
				g->FillRectangle(brush,x1,y1,SquareLength,SquareLength);
				g->DrawRectangle(pen,x1,y1,SquareLength,SquareLength);
			}
		}
		void DrawSquare(int i,int j , int color,Color ^colorPen)//��һ������ĺ���
		{
			this->SelectColor(color);	
			pen=gcnew Pen(*colorPen,2.0f);
			int x1=i*this->SquareLength;
			int y1=j*this->SquareLength;
			g->FillRectangle(brush,x1,y1,SquareLength,SquareLength);
			g->DrawRectangle(pen,x1,y1,SquareLength,SquareLength);
		}

		void DrawAll(int y)//ȫ���ػ�ĺ���,yΪ��ȥ��i�к�ȫ���ػ�
		{	
			g->Clear(this->pictureBox1->BackColor);
			//��ˢ�µ�ͼ����
			for(int i=0 ; i<15 ; i++)//ע��30,15Ϊ������Ľ����Ϊ��ͼ�ĳ��Ϳ�
					 for(int j=y ; j>0 ; j--)
					 {
						 Map[i][j]=Map[i][j-1];//��������ӵ�״̬���ݵ�����;
						 SquareColor[i][j]=SquareColor[i][j-1];
					 }
			for(int i=0 ; i<15 ; i++)//���»���
					 for(int j=0 ; j<30 ; j++)
						 if(Map[i][j]==1)
							 this->DrawSquare(i,j,SquareColor[i][j],Color::White);	
		}

		bool WalkAble()//�ж������Ƿ���·
		{
			TopLimit=30;
			BottomLimit=0;
			for(int i=0 ; i<4 ; i++)
			{
				if(TopLimit > NowSquare[i][1])  TopLimit = NowSquare[i][1];//�ж����������
				if(BottomLimit < NowSquare[i][1])  BottomLimit = NowSquare[i][1];//�ж����·�������	
			}
			for(int i=0 ; i<4 ; i++)
				if(BottomLimit>=29 || Map[ NowSquare[i][0] ][ NowSquare[i][1]+1 ]==1)//��-1�ſ�����,ע���������־�Ϊ�������0��ʼ��������1
					return false;
			return true;
		}
		bool LeftWalkAble()//�ж��Ƿ���������ƶ�
		{
			LeftLimit=15;
			for(int i=0 ; i<4 ; i++)
				if(LeftLimit > NowSquare[i][0])  LeftLimit = NowSquare[i][0];//�ж�������������
			for(int i=0 ; i<4 ; i++)
				if(LeftLimit==0 || Map[ NowSquare[i][0]-1 ][ NowSquare[i][1] ]==1)//��-1�ſ�����,ע���������־�Ϊ�������0��ʼ��������1
					return false;
			return true;
		}
		bool RightWalkAble()//�ж��Ƿ���������ƶ�
		{
			RightLimit=0;
			for(int i=0 ; i<4 ; i++)
				if(RightLimit < NowSquare[i][0])  RightLimit = NowSquare[i][0];//�ж�������������
			for(int i=0 ; i<4 ; i++)
				if(RightLimit==14 || Map[ NowSquare[i][0]+1 ][ NowSquare[i][1] ]==1)//��-1�ſ�����,ע���������־�Ϊ�������0��ʼ��������1
					return false;
			return true;
		}
		bool DisappearAble(int y)//�ж϶�Ӧ������Ϊy����һ���Ƿ������ȥ
		{
			for(int i=0 ; i<15 ; i++)
				if(Map[i][y]==-1)
					return false;
			return true;
		}
		bool ChangeSuccess()//�ܷ���εĺ���
		{
			for(int i=0 ; i<4 ; i++)
				if(Map[ NowSquare[i][0] ][ NowSquare[i][1] ]!=-1 || NowSquare[i][1]>28 || NowSquare[i][0]<0 )//Ӧ��д29��������BUG�����д����
					return false;
			return true;
		}

		void Changed()//������εĺ���
		{
			this->shape2=(shape2+1)%4;//������shape����ķ���״̬�ı�
			
			int a=0;
			for(int i=0 ; i<4 ; i++)//���ݱ任ǰ
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
				play->Play();//��������Ϊ��������
				this->DrawSquares(YesterdaySquare,Pic1BackCol,this->pictureBox1->BackColor);
				this->DrawSquares(NowSquare,this->NowColor,Color::White);		
			}
			else
			{
				for(int i=0 ; i<4 ; i++)//���ݱ任ǰ
				for(int j=0 ; j<2 ; j++)
					NowSquare[i][j]=YesterdaySquare[i][j];//���ݸ�ֵ��ȥ.
			}
		}
		void DrawNextSquare()//��picturebox2�л滭����һ������Ĵ���
		{
			for(int i=0 ;  i<4 ; i++)
					 {				 
						 int x2=(NowSquare[i][0]-3)*this->SquareLength;
						 int y2=(NowSquare[i][1]+1)*this->SquareLength;
						 brush=gcnew SolidBrush(this->pictureBox2->BackColor);	//��ȥ��ǰ��
						 pen=gcnew Pen(this->pictureBox2->BackColor,2.0f);
						 g1->FillRectangle(brush,x2,y2,SquareLength,SquareLength);
						 g1->DrawRectangle(pen,x2,y2,SquareLength,SquareLength);					 					 
					 }
					 for(int i=0 ;  i<4 ; i++)//�������ڵ�
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
			g->DrawString("��Ϸ����:",font,brush,25,6);
			font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,12.0f,FontStyle::Bold);
			brush=gcnew SolidBrush(Color::Red);
			g->DrawString("������Ϸ���밴P����ͣ������˵��п�ʼ��Ϸ",font,brush,8,56);
			g->DrawString("��˵��п�ʼ��Ϸ��",font,brush,8,90);
			g->DrawString("���μ���W || UP ",font,brush,8,124);
			g->DrawString("���ټ���S || DOWN ",font,brush,8,158);
			g->DrawString("���Ƽ���A || LEFT ",font,brush,8,192);
			g->DrawString("���Ƽ���D || RIGHT ",font,brush,8,226);
			font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,18.0f,FontStyle::Bold);
			brush=gcnew SolidBrush(Color::Green);
			g->DrawString("�Ѷȳɳ���",font,brush,8,260);
			font=gcnew System::Drawing::Font(FontFamily::GenericSansSerif,12.0f,FontStyle::Bold);
			brush=gcnew SolidBrush(Color::Blue);
			g->DrawString("һ����ȥ����Խ��÷�Խ��",font,brush,8,290);
			g->DrawString("������ս�߱ȷֵĲ�������",font,brush,8,310);
			g->DrawString("���˷��������ٶȵ������",font,brush,8,330);
			g->DrawString("�����и����ϰ�������ս^_^��",font,brush,8,350);
			g->DrawString("�����Ĺ۲���������ջ�",font,brush,8,370);
		}
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 g=this->pictureBox1->CreateGraphics();
				 g1=this->pictureBox2->CreateGraphics();
				 play=gcnew System::Media::SoundPlayer();//���������������
				 NowDirectory=System::Environment::CurrentDirectory;//��õ�ǰĿ¼
				 this->SquareDown=false;//һ��ʼ���½�����
				 this->SquareLength=this->pictureBox1->Width/wide;//����ı߳�
				 random=gcnew Random();
				 this->Score=0;//������ʼ��Ϊ0
				 this->TimeNow=this->timer1->Interval;
				 this->Show1=false;//��һ����ʾ�������� ����ֵ
				 this->BoostAudio=false;//���������Ƿ�����
				 for(int i=0 ; i<15 ; i++)//ע��30,15Ϊ������Ľ����Ϊ��ͼ�ĳ��Ϳ�
					 for(int j=0 ; j<30; j++)
						 Map[i][j]=-1;//һ��ʼȫ��û����

				  for(int i=0 ; i<15 ; i++)//����ɫ��ͼ��ֵ
					 for(int j=0 ; j<30; j++)
						 SquareColor[i][j]=-1;

                 //����ΪΪ��һ�����ɷ���Ĵ���
				 shapenext1=random->Next(0,7);
				 shapenext2=random->Next(0,4);//���������״��״̬
				 this->NextColor=random->Next(0,8);//�����������ɫ
				 int a=0;
				 for(int j=0 ; j<16 ; j++)
				 {
					 if(shape[shapenext1][shapenext2][j]==1)
					 {
						 NextSquare[a][0]=j%4+5;//����ʼ�ķ������鸳ֵ,�������ʼ���ɵľ���
						 NextSquare[a][1]=j/4;//��Ӧ�����꣬���ǿ���
						 a++;
					 }
				 }
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->SquareDown==false)//���½�����ʱ
				 {
					 for(int i=0 ; i<4 ; i++)//����һ�����鸳ֵ������
						 for(int j=0 ; j<2 ; j++)
							 NowSquare[i][j]=NextSquare[i][j];
					 shape1=shapenext1;//��ֵ����������ǰ��ά��״̬!
					 shape2=shapenext2;
					 this->NowColor=this->NextColor;//��ֵΪ������ɫ����
					 this->LengthDowing=shape[shape1][shape2][16];//���㵱ǰ��ó��͸�
					 this->HeightDowing=shape[shape1][shape2][17];
					 shapenext1=random->Next(0,7);//���������״��״̬
					 shapenext2=random->Next(0,4);
					 if(this->Score>=5000)//��1000�����Ǽ������ط���
					 {
						 this->timer1->Enabled=false;
						 this->NextColor=random->Next(0,9);//�����������ɫ���ϱ���ɫ����ʱ��������ؿ�~~������
						 if(this->Show1==false)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->Load();
							 play->Play();//��������Ϊ��������
							 MessageBox::Show("��ϲ������һ��¥����ע��֮�󽫻������ط��飬������Ԥ����\r\n^_^ע��Ϊ�����Ѷȴ�ʱ�����ط������б߿�ɼ�"
							 ,"��ʾ",MessageBoxButtons::OK,MessageBoxIcon::Information);
						 }
						 this->Show1=true;//�Ժ�����ʾ��ʾ��
						 this->timer1->Interval=this->TimeNow;//�ûָ�����ʱ�䣬������ż��ټ���ȥ������ȥ��1000��
						 //�ڵ���MessageBoxʱ�ɿ���������ʱ���������¼�����������������ָ����~~!!!
						 this->timer1->Enabled=true;
					 }
					 else
						 this->NextColor=random->Next(0,8);//�����������ɫ,�����ط���
					 int a=0;
					 this->XWalk=0;  this->YWalk=0;//��ʼ��һ��û�ߣ��ھ���λ������	 
					 for(int j=0 ; j<16 ; j++)
					 {
						 if(shape[shapenext1][shapenext2][j]==1)
						 {
							 NextSquare[a][0]=j%4+5;//����ʼ�ķ������鸳ֵ,�������ʼ���ɵľ���
							 NextSquare[a][1]=j/4;//��Ӧ�����꣬���ǿ���
							 a++;
						 }
					 }	 
					 this->DrawNextSquare();//��picturebox2�л滭����һ������Ĵ���
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);		
					 this->SquareDown=true;//�Ѿ������½��ķ���
				 }
				 else//�Ѿ��з������½�
				 {
					 this->YWalk++;
				     this->DrawSquares(NowSquare,Pic1BackCol,this->pictureBox1->BackColor);//�Ȱ�֮ǰ����ʧ��~��
					// this->DrawSquares(NowSquare,Color::FromArgb(0,255,0,0),Color::Black );
					 for(int i=0 ; i<4 ; i++)
						 NowSquare[i][1]++;//����������!
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);		
				 }
				 if(this->WalkAble()==false)//�����·���ߣ�����
				 {
					 this->SquareDown=false;
					 play->SoundLocation=this->NowDirectory+"\\Audio\\bottom.wav";
					 play->Load();
					 play->Play();//��������Ϊ��������
					 //����Ҫ��Map���и�ֵ
					 for(int i=0 ; i<4 ; i++)
					 {
							 Map[ NowSquare[i][0] ] [ NowSquare[i][1] ]=1;//����������,���з���.
							 SquareColor[ NowSquare[i][0] ] [ NowSquare[i][1] ]=this->NowColor;//����ɫд����ɫ��ͼ��ȥ
					 }

					 //ɨ����ȥ������
					 int KillNumOnce=0;//һ�����������еļ���������
					 for(int i=0 ; i<this->HeightDowing ; i++)
						 if(this->DisappearAble(this->BottomLimit-i))//���������ȥ
						 {
							 KillNumOnce++;
							 this->DrawAll(this->BottomLimit-i);
							 this->Score=this->Score+100;
							 i--;						 
						 }
						 if(KillNumOnce==1)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
						 }
						 if(KillNumOnce==2)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
							 this->Score=this->Score+100;//��ȥ����һ�Σ����Ǹ����ٷ�
							 play->SoundLocation=this->NowDirectory+"\\Audio\\doublekill.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
							 
						 }
						 if(KillNumOnce==3)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
							 this->Score=this->Score+200;//��ȥ���и���ٷ�
							 play->SoundLocation=this->NowDirectory+"\\Audio\\triplekill.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
							 
						 }
						 if(KillNumOnce==4)
						 {
							 play->SoundLocation=this->NowDirectory+"\\Audio\\congratulation.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
							 this->Score=this->Score+400;//���и�800��,�ǵü�ȥǰ��ӹ���.
							 play->SoundLocation=this->NowDirectory+"\\Audio\\monsterkill.wav";
							 play->LoadAsync();//��˵�е��첽���š���
							 play->PlaySync();//��������Ϊ��������
							 
						 }
						 this->label3->Text=this->Score.ToString();
						 this->timer1->Interval=200-(this->Score/1000)*20;//ÿ��1000�֣���ô�ٶȼӿ죡����
						 this->TimeNow=this->timer1->Interval;//��¼�����Ϊ�ָ����ڱ�ļ����׼��
						 if(this->TopLimit==0)//��Ϸ����ʱ��
						 {
							 this->timer1->Enabled=false;
							 this->Text="Game Over";
							 play->SoundLocation=this->NowDirectory+"\\Audio\\over.wav";
							 play->Load();//��˵�е��첽���š���
							 play->Play();//��������Ϊ��������
							 MessageBox::Show("�ˣ���ò���\r\n����˵������¿�ʼ��Ϸ������������","Game Over",MessageBoxButtons::OK,MessageBoxIcon::Warning);
						 }			 
				 }
			 }
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {		
				 if( (e->KeyCode==Keys::A || e->KeyCode==Keys::Left ) && this->LeftWalkAble() 
					 && this->timer1->Enabled==true && this->SquareDown==true)//�����ƶ�
				 {			 
					 this->timer1->Enabled=false;//������ʵ������ȥ�Ĺ��ܣ�����Ȼ�����ԡ����д�Ŭ�����
					 play->SoundLocation=this->NowDirectory+"\\Audio\\left.wav";
					 play->Load();
					 play->Play();//��������Ϊ��������
					 this->XWalk--;
					 this->DrawSquares(NowSquare,Pic1BackCol,this->pictureBox1->BackColor);//�Ȱ�֮ǰ����ʧ��~��
					 for(int i=0 ; i<4 ; i++)
						 NowSquare[i][0]--;//����������
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);//���»���һ�� ������õ��½�������»��ƣ��������˸��
					 this->timer1->Enabled=true;
				 }
				 else if((e->KeyCode==Keys::D || e->KeyCode==Keys::Right )  && this->RightWalkAble() 
					 && this->timer1->Enabled==true && this->SquareDown==true)
				 {
					 this->timer1->Enabled=false;
					 play->SoundLocation=this->NowDirectory+"\\Audio\\right.wav";
					 play->Load();
					 play->Play();//��������Ϊ��������
					 this->XWalk++;
					 this->DrawSquares(NowSquare,Pic1BackCol,this->pictureBox1->BackColor);//�Ȱ�֮ǰ����ʧ��~��
					 for(int i=0 ; i<4 ; i++)
						 NowSquare[i][0]++;//����������!
					 this->DrawSquares(NowSquare,this->NowColor,Color::White);//���»���
					 this->timer1->Enabled=true;
				 }
				 else if((e->KeyCode==Keys::S || e->KeyCode==Keys::Down) 
					 && this->timer1->Enabled==true && this->SquareDown==true)//�����½�
				 {
					 this->timer1->Interval=25;
					 if(this->BoostAudio==false)
					 {
						 play->SoundLocation=this->NowDirectory+"\\Audio\\boost.wav";
						 play->Load();
						 play->Play();//��������Ϊ��������
					 }
					 this->BoostAudio=true;
				 }
				 else if( (e->KeyCode==Keys::W || e->KeyCode==Keys::Up) 
					 && this->timer1->Enabled==true && this->SquareDown==true)//�任��
				 {
					 //this->timer1->Enabled=false;//��ͣ��
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
					 this->timer1->Enabled=!this->timer1->Enabled;//��ͣ��Ϸ
					 play->SoundLocation=this->NowDirectory+"\\Audio\\pause.wav";
					 play->Load();
					 play->Play();//��������Ϊ��������
				 }
			 }
		 
private: System::Void Form1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyCode==Keys::S || e->KeyCode==Keys::Down)//�ſ����ټ����ָ��ٶ�
			 {
				 //play->Stop();
				 this->BoostAudio=false;//ֻ���ɿ���ʱ��Ÿ�ֵ��false
				 this->timer1->Interval=this->TimeNow;//�ָ�����ʱ��
			 }
		 }

private: System::Void ��ʼ��ϷSToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->RuleExist==true)
			 {
				 g->Clear(this->pictureBox1->BackColor);
				 this->RuleExist=false;
			 }
			 this->timer1->Enabled=true;
		 }
private: System::Void ��ͣ��ϷPToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->RuleExist==true)
			 {
				 g->Clear(this->pictureBox1->BackColor);
				 this->RuleExist=false;
			 }
			 this->timer1->Enabled=!this->timer1->Enabled;//��ͣ��Ϸ
			 play->SoundLocation=this->NowDirectory+"\\Audio\\pause.wav";
			 play->Load();
			 play->Play();//��������Ϊ��������
		 }
private: System::Void ������ϷCToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Enabled=true;
		 }
private: System::Void �˳���ϷEToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }

private: System::Void ����ָ·ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Interval=50;
			 this->TimeNow=this->timer1->Interval;
			 this->����ָ·ToolStripMenuItem->Checked=true;
			 this->¯����ToolStripMenuItem1->Checked=false;
			 this->ţ��С��ToolStripMenuItem->Checked=false;
		 }
private: System::Void ¯����ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Interval=150;
			 this->TimeNow=this->timer1->Interval;
			 this->����ָ·ToolStripMenuItem->Checked=false;
			 this->¯����ToolStripMenuItem1->Checked=true;
			 this->ţ��С��ToolStripMenuItem->Checked=false;
		 }
private: System::Void ţ��С��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->timer1->Interval=200;
			 this->TimeNow=this->timer1->Interval;
			 this->����ָ·ToolStripMenuItem->Checked=false;
			 this->¯����ToolStripMenuItem1->Checked=false;
			 this->ţ��С��ToolStripMenuItem->Checked=true;
		 }
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("��ӭ������ŭ�ķ���~\r\n������Ϸ�˵�������ʼ��Ϸ��������ͣ��P��ʼ\r\n����Ը���ϲ��ѡ��WASD���������Ҷ��鰴����������Ϸ��"
					 ,"��ʾ",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
private: System::Void ���¿�ʼ��ϷToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->SquareDown=false;//һ��ʼ���½�����
			 this->Score=0;//������ʼ��Ϊ0
			 this->label3->Text="0";
			 this->Text="��ŭ�ķ���";
			 this->timer1->Interval=200;
			 this->TimeNow=this->timer1->Interval;
			 this->timer1->Enabled=true;
			 this->Show1=false;//��һ����ʾ�������� ����ֵ
			 g->Clear(this->pictureBox1->BackColor);//�������Ч��
			 g1->Clear(this->pictureBox2->BackColor);
			 for(int i=0 ; i<15 ; i++)//ע��30,15Ϊ������Ľ����Ϊ��ͼ�ĳ��Ϳ�
				 for(int j=0 ; j<30; j++)
					 Map[i][j]=-1;//һ��ʼȫ��û����
			 for(int i=0 ; i<15 ; i++)//����ɫ��ͼ��ֵ
				 for(int j=0 ; j<30; j++)
					 SquareColor[i][j]=-1;

                 //����ΪΪ��һ�����ɷ���Ĵ���
				 shapenext1=random->Next(0,7);
				 shapenext2=random->Next(0,4);//���������״��״̬
				 this->NextColor=random->Next(0,8);//�����������ɫ
				 int a=0;
				 for(int j=0 ; j<16 ; j++)
				 {
					 if(shape[shapenext1][shapenext2][j]==1)
					 {
						 NextSquare[a][0]=j%4+5;//����ʼ�ķ������鸳ֵ,�������ʼ���ɵľ���
						 NextSquare[a][1]=j/4;//��Ӧ�����꣬���ǿ���
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
			 this->DrawAll(1);//�ػ�ʱ���»�������
		 }
};
}

